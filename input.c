//
// Created by rtmus on 19.12.2022.
//

#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include "check.h"
int *input(int *h){
    printf("enter the number of elements\n");
    *h= check();
    int *mass = malloc(*h * sizeof(int ));
    printf("enter the array elements\n");
    for(int i=0; i<*h; i++){
        mass[i] = check();
    }
    return mass;
}
