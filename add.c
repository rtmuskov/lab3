#include "add.h"
#include <stdio.h>
#include <stdlib.h>
#include "check.h"
int add (int *h, int *mass, int **pArray, int *el , int *id, int *kl) {
     int flag =1;
     int flag1=3;
     int g;
    while (flag == 1) {
        *h = *h + 1;
        if (*h>*kl){
            printf("Вы выходите за пределы заданной вами памяти, желаете ее увеличить ?: Нажмите [1], если да, нажмите [0], если нет %d\n",*kl);
           flag1=check();
           if (flag1 ==1) {
           *pArray = realloc(mass, (*h) * sizeof(int));
           }
           if (flag1==0) {
               flag=0;
           }
        }


        if (*id >= *h) *id = *h - 1;
        if (*id < 0) *id = 0;
        for (int i = *h - 1; i > *id; i--) {
            (*pArray)[i] = (*pArray)[i - 1];
        }
        (*pArray)[*id] = *el;
        mass = *pArray;
        printf("\nНажмите 1, если хотите еще что-то добавить. Нажмите 0, если хотите выйти:");
        flag=check();
    }
    return 0;
}


