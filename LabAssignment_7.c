//Samir Fouissi
//Lab Assignment # 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;
    int swaps[n];

    // Initialize swaps to 0
    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }

    // Bubble Sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[j]++;
            }
        }
    }

    // Print swaps array
    for (i = 0; i < n; i++) {
        printf("Swaps needed for index %d in array: %d\n", i, swaps[i]);
    }

    return 0;
}
