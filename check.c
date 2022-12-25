//
// Created by rtmus on 19.12.2022.
//

#include "check.h"
#include <stdio.h>
int check() {
    int n;
    int j = scanf("%d", &n);
    while (j != 1) {
        printf("Данная программа работает только с числами\n");
        scanf("%*[^\n]");
        j = scanf("%d", &n);

    }
    return n;
}