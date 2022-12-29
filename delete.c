//
// Created by rtmus on 19.12.2022.
//

#include "delete.h"
#include <stdio.h>
#include "check.h"

int delete(int *h, int *mass, int **pArray) {
    int id, flag = 1, n = *h;
    while (flag == 1) {
        printf("\nВведите индекс: ");
        id= check();
        if (id > n- 1 || id < 0) {
            printf("%d Индекс за пределами массива", id);
            continue;
        }
        for (int i = id; i < n - 1; i++) {
            mass[i] = mass[i + 1];
        }
        n--;
        mass = *pArray;
            *h-=1;

        printf("\nНажмите 1, если хотите еще что-то удалить. Нажмите 0, если хотите выйти: ");
        flag = check();
    }


    *h= n;
    return 0;
}
