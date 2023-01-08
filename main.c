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
    int fl = 0, fl2 = 0, fl5 = 0;
    int *mass;
    int *mass2= malloc(sizeof (int ));
    int **pArray = &mass;
    int **pArray2 = &mass2;

    while (flag) {
        if (!fl) {
            printf("Нажмите 1 если вы хотите проинициализировать массив\nНажмите 0, если хотите выйти\n");
            fl++;
        } else {
            printf("Нажмите 1 если вы хотите проинициализировать массив\nНажмите 2, если хотите добавить элемент\nНажмите 3, если хотите удалить элемент\nНажмите 4, если хотите вывести массив\nНажмите 5, если хотите оставить числа, которые делятся на 9\nНажмите 0, если хотите выйти\n");
        }
        flag = check();
        if (flag == 1) mass = input(&h,&kl);
        if (flag == 2) {
            if (fl5) {
                printf("Выберите массив [1] или [2]");
                while ((fl2 != 1) && (fl2 != 2)) {
                    fl2 = check();
                }
            }
            printf("Введите элемент");
            el = check();
            printf("Введите индекс ");
            id = check();
            if ((fl5) && (fl2 == 2)) {
                add(&h2,mass2, pArray2, &el, &id,&kl);
            } else {
                add(&h,mass, pArray, &el, &id,&kl);
            }

        }
        if (flag == 3) {
            if (fl5) {
                printf("Выберите массив [1] или [2]");
                while ((fl2 != 1) && (fl2 != 2)) {
                    fl2 = check();
                }
            }
            if ((fl5) && (fl2 == 2)) {
                delete(&h2, mass2, pArray2);
            } else {
                delete(&h, mass, pArray);
            }
            delete(&h, mass, pArray);
        }
        if (flag == 5) {
            modifiedarray(&h, mass, pArray,mass2,&h2);
            fl5++;
        }
        if (flag == 4) {
            if (fl5) {
                printf("Выберите массив [1] или [2]");
                while ((fl2 != 1) && (fl2 != 2)) {
                    fl2 = check();
                }
            }
            if ((fl5) && (fl2 == 2)) {
                print(mass2, &h2);
            } else {
                print(mass, &h);
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
    if (mass2 != NULL) {
        free(mass2);
        mass2 = NULL;
    }

    return 0;
}


