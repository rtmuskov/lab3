//
// Created by rtmus on 19.12.2022.
//

#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include "check.h"
int *input(int *h){
    printf("Введите кол-во элементов\n");
    *h= check();
    int *mass = malloc(*h * sizeof(int ));
    printf("Введите элементы\n");
    for(int i=0; i<*h; i++){
        mass[i] = check();
    }
    return mass;
}
