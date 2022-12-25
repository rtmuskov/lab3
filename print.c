//
// Created by rtmus on 19.12.2022.
//

#include "print.h"
#include <stdio.h>
int print(int *mass, int *h) {
    printf("Array has length: %d", *h);
    for (int i = 0; i < *h; i++){
        printf("\n%d: %d\n", i, mass[i]);
}
    return 0;
}