#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1
    int arr1[10];

    // 2
    srand( time(NULL) );
    int i;

    for (i = 0; i < 10; i++) {
        arr1[i] = rand();
    }
    
    // 3
    arr1[9] = 0;

    // 4
    printf("arr1: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // 5
    int arr2[10];

    // 6
    int *p1 = arr1;
    int *p2 = arr2;

    for (i = 0; i < 10; i++) {
        *(p2 + i) = *(p1 + 9 - i); 
    }

    printf("arr2: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(arr2 + i));
    }
    printf("\n");    
}