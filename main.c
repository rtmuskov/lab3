#include <stdio.h>
#include <stdlib.h>
#include "check.h"
#include "delete.h"
#include "input.h"
#include "add.h"
#include "print.h"
#include "modifiedarray.h"

int main() {
    int h,flag = 1;
    int *mass;
    int **pArray = &mass;
    while (flag) {
        printf("Нажмите 1 если вы хотите проинициализировать массив\nНажмите 2, если хотите добавить элемент\nНажмите 3, если хотите удалить элемент\nНажмите 4, если хотите вывести массив\nНажмите 5, если хотите оставить числа, которые делятся на 9\nНажмите 0, если хотите выйти\n");
        flag = check();
        if (flag == 1) mass = input(&h);
        if (flag == 2) *mass = add(&h,mass, pArray);
        if (flag == 3) *mass= delete(&h, mass, pArray);
        if (flag == 4) print(mass, &h);
        if (flag == 5) modifiedarray( &h, mass, pArray);
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
