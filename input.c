#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include "check.h"
int *input(int *h, int *kl) {
    int g = 1;
    int j = 0;
    printf("Введите кол-во памяти в байтах\n");
    *h = check();
    g = ((*h) / sizeof(int));
    printf("Кол-во чисел, на которую вы выделили память: %d\n", g);
    int *mass = malloc(g * sizeof(int));
    printf("Введите желаемое кол-во символов:\n");
    j = check();
    while (j>g){
        printf(":Желаемое кол-во символов превышает, кол-во, на которое вы выделили память, уменьшите кол-во элементов:\n");
        j = check();
    }
        printf("Введите элементы\n");
        for (int i = 0; i < j; i++) {
            mass[i] = check();
        }

        *h = j;
        *kl = g;
        return mass;

}

