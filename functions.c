#include <stdio.h>
#include "functions.h"

void enterArr(float* arr, int n) {
    printf("enter numerical sequence: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
}

void outputArr(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.4f ", arr[i]);
    }
    printf("\n");
}

float max(float a, float b) {
    return (a > b ? a : b);
}

float* createArr(float* arr1, float* arr2, int n) {
    for (int i = 0; i < n; i++) {
        arr1[i] = max(arr1[i], arr2[i]) / 2;
    }

    return arr1;
}
