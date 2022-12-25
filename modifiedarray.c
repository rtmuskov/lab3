//
// Created by rtmus on 19.12.2022.
//

#include "modifiedarray.h"
#include <stdlib.h>
#include <stdio.h>

int modifiedarray(int *h, int *buf, int *mass, int **pArray) {
    int flag = 0;
    *buf=*h;
    for (int a = 0; a < *buf; a++) {
        if(mass[a]%9 == 0) {
            flag = 1;
        }
        if (flag == 0) {
            for (int i = a; i < *buf - 1; i++) {
                mass[i] = mass[i+1];
            }
            a++;
          if (*h>a-1) {
              *pArray= realloc(mass,(*h--) *sizeof(int));

          }
        }
            mass = *pArray;

        }



    *h = *h-1;
    printf("\nnew array is created\n");
    return 0;
}