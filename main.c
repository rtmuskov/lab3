#include <stdio.h>
#include <stdlib.h>
#include "check.h"
#include "delete.h"
#include "input.h"
#include "add.h"
#include "print.h"
#include "modifiedarray.h"



int main() {
    int h,buf, flag = 1;
    int *mass;
    int **pArray = &mass;
    while (flag) {
        printf("if you want to initialize an array, press 1\nif you want to add element, press 2\nif you want to delete the element, press /3\nif you want to print array, press 4\nif you want to find numbers that are divisible by 9, press 5\nif you want to exit, press 0");
        flag = check();
        if (flag == 0) break;
        if (flag == 1) mass = input(&h);
        if (flag == 2) *mass = add(&h, &buf, mass, pArray);
        if (flag == 3) *mass= delete(&h, &buf, mass, pArray);
        if (flag == 4) print(mass, &h);
        if (flag == 5) modifiedarray( &h, &buf, mass, pArray);
    }
    for (int i = 0; i < h; i++) {
        printf("%d", mass[i]);
    }

    if (mass != NULL) {
        free(mass);
        mass= NULL;
    }

    return 0;
}
