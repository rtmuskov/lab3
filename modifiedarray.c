#include "modifiedarray.h"
#include <stdlib.h>
#include <stdio.h>

int modifiedarray(int *h, int *mass, int **pArray,int *mass2,int *h2) {
    int flag = 0;
    for (int i = 0; i < *h; i++) {
        mass2[i] = mass[i];
    }
    int l = *h;
    for (int a = 0; a < l; a++) {
        if((mass[a] % 9 ==0 ) && (mass[a] != 0)) {
            flag = 1;
        }
        if (flag == 0) {
            for (int i = a; i < l - 1; i++) {
                mass2[i] = mass2[i+1];
            }
            l--;
            a--;
            *pArray= realloc(mass2,l *sizeof(int));
        }
        flag = 0;
    }
    *h2 = l;
    printf("\nНовый массив создан\n");
    return 0;
}