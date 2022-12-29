#include "add.h"
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "check.h"
int add (int *h, int *mass, int **pArray) {
    int id; int el; int flag =1;
    while (flag == 1) {
        printf("Print elelelement");
        el = check();
        printf("/print index ");
        id = check();
        *h = *h + 1;
        *pArray = realloc(mass, (*h) * sizeof(int));

        if (id >= *h) id = *h - 1;
        if (id < 0) id = 0;
        for (int i = *h - 1; i > id; i--) {
            (*pArray)[i] = (*pArray)[i - 1];
        }
        (*pArray)[id] = el;
        mass = *pArray;
        printf("\nEnter [1] to insert anything else or [0] to finish: ");
        input(&flag);
    }
    return 0;
}


