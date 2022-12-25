//
// Created by rtmus on 19.12.2022.
//

#include "add.h"
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "check.h"

int add(int *h, int *buf, int *mass, int **pArray) {
    int id, flag = 1, size = *h, sizeUsed = *buf;
    while (flag == 1) {
        printf("\n-----------------------");
        printf("\nindex: ");
         id = check();
        if (id > sizeUsed - 1) {
            id = sizeUsed;
            sizeUsed++;
        }
        if (sizeUsed >= size) {
            *pArray = realloc(mass, (size * 2) * sizeof(int));
            if (*pArray == NULL) {
                printf("Failed to allocate memory\n");
                return -1;
            }
            mass = *pArray;
            size *= 2;
        }

        printf("\nvalue: ");
        input(&mass[id]);
        printf("\nEnter [1] to insert anything else or [0] to finish: ");
        input(&flag);
    }

    *h = size;
    *buf = sizeUsed;

    return 0;
}