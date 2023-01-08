#include <stdio.h>
#include <stdlib.h>
#include "check.h"
#include "delete.h"
#include "input.h"
#include "add.h"
#include "print.h"
#include "modifiedarray.h"
int main() {
    system("chcp 65001");
    int el, id;
    int kl;
    int flag1=0;
    int h,h2,flag = 1;
    int *mass;
    int *mass2= malloc(sizeof (int ));
    int **pArray = &mass;
    int **pArray2 = &mass2;

    while (flag) {
        printf("Нажмите 1 если вы хотите проинициализировать массив\nНажмите 2, если хотите добавить элемент\nНажмите 3, если хотите удалить элемент\nНажмите 4, если хотите вывести массив\nНажмите 5, если хотите оставить числа, которые делятся на 9\nНажмите 0, если хотите выйти\n");

        flag = check();
        if (flag == 1) mass = input(&h,&kl);
        if (flag == 2) {
            printf("Введите элемент");
            el = check();
            printf("Введите индекс ");
            id = check();
            add(&h,mass, pArray, &el, &id,&kl);
        }
        if (flag == 3) delete(&h, mass, pArray);
        if (flag == 5) {
            modifiedarray(&h, mass, pArray,mass2,&h2);
        }
        if (flag == 4) {
            printf("\n Нажмите [1], чтобы вывести массив, нажмите [2], чтобы вывести массив, который оставил числа,которые деляться на 9");
            flag1=check();
            if (flag1==1) {
                print(mass, &h);
            }
            if (flag1==2) {
                print(mass2, &h2);
            }
        }
        if (flag == 0) break;
    }
    for (int i = 0; i < h; i++) {
        printf("%d", mass[i]);
    }

    if (mass != NULL) {
        free(mass);
        mass= NULL;
    }

    return 0;
}


