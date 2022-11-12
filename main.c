#include <stdio.h>
#include "functions.h"

int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    float arr1[n], arr2[n], arr3[n];
    enterArr(arr1, n);
    enterArr(arr2, n);
    enterArr(arr3, n);

    outputArr(createArr(arr1, arr2, n), n);
    outputArr(createArr(arr2, arr3, n), n);

    return 0;
}
