#include "modifiedarray.h"
#include <stdlib.h>
#include <stdio.h>

int modifiedarray(int *h, int *mass, int **pArray) {
    int flag = 0;
    int l = *h;
    for (int a = 0; a < l; a++) {
        if((mass[a] % 9 ==0 ) && (mass[a] != 0)) {
            flag = 1;
        }
        if (flag == 0) {
            for (int i = a; i < l - 1; i++) {
                mass[i] = mass[i+1];
            }
            l--;
            a--;
            *pArray= realloc(mass,l *sizeof(int));
        }
        flag = 0;
    }
    *h = l;
    printf("\nНовый массив создан\n");
    return 0;
}