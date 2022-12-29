
#include "add.h"
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "check.h"

/*int add (int *h, int *mass, int **pArray) {
    int id, flag = 1;
    while (flag == 1) {
        printf("/print index ");
        id = check();
        if (id <= *h) {
            *h++;
            *pArray = realloc(mass, (*h) * sizeof(int));
            mass = *pArray;
            id = check();
            printf("enter elements\n");
            for (int i = *h - 1; i >= id - 1; i--) {
                mass[i + 1] = mass[i];
            }
            mass[id - 1] = check();
            for (int i = 0; i < *h; i++) {
                printf("%d ", mass[i]);
            }
            printf("\n");
        }


    if (id >= *h - 1) {
        *h++;
        *pArray = realloc(mass, (*h) * sizeof(int));
        id = *h;
        printf("enter elements\n");
        mass[id - 1] = check();
        for (int i = 0; i < *h; i++) {
            printf("%d ", mass[i]);
        }
        printf("\n");

    }
}

return 0;
}
*/
int add (int *h, int *mass, int **pArray) {
    int id;
    printf("Print elelelement");
    int el;
    scanf("%d", &el);
    printf("/print index ");
    //id = check();
    scanf("%d", &id);
    *h= *h+1;
    *pArray = realloc(mass, (*h) * sizeof(int));

    if (id >= *h) id = *h -1;
    if (id < 0) id = 0;
    for (int i = *h - 1; i > id; i--) {
        (*pArray)[i] = (*pArray)[i - 1];
    }
    (*pArray)[id] = el;
    mass = *pArray;
    return 0;
}


