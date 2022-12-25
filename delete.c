//
// Created by rtmus on 19.12.2022.
//

#include "delete.h"
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "check.h"

int delete(int *h, int *buf, int *mass, int **pArray) {
    int id, flag = 1, size = *h, sizeUsed = *buf;
    while (flag == 1) {
        printf("\n-----------------------");
        printf("\ndelete element at index: ");
        id= check();
        if (id > sizeUsed - 1 || id < 0) {
            printf("%d is out of range", id);
            continue;
        }
        for (int i = id; i < sizeUsed - 1; i++) {
            mass[i] = mass[i + 1];
        }
        sizeUsed--;
        if (sizeUsed < size / 2) {
            *pArray = realloc(mass, (size / 2) * sizeof(int));
            if (*pArray == NULL) {
                printf("Failed to allocate memory\n");
                return -1;
            }
            mass = *pArray;
            size /= 2;
        }
        printf("\nEnter [1] to delete anything else or [0] to finish: ");
        flag = check();
    }

    *h = size;
    *buf = sizeUsed;
    return 0;
}
