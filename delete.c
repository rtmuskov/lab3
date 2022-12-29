//
// Created by rtmus on 19.12.2022.
//

#include "delete.h"
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "check.h"

int delete(int *h, int *mass, int **pArray) {
    int id, flag = 1, n = *h;
    while (flag == 1) {
        printf("\nprint index: ");
        id= check();
        if (id > n- 1 || id < 0) {
            printf("%d is out of range", id);
            continue;
        }
        for (int i = id; i < n - 1; i++) {
            mass[i] = mass[i + 1];
        }
        n--;
        if (n< *h -1) {
            *pArray = realloc(mass, (*h / 2) * sizeof(int));
            if (*pArray == NULL) {
                printf("Failed to allocate memory\n");
                return -1;
            }
            mass = *pArray;
            *h/= 2;
        }
        printf("\nEnter [1] to delete anything else or [0] to finish: ");
        flag = check();
    }


    *h= n;
    return 0;
}
