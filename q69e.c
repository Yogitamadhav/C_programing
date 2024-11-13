#include <stdio.h>

void intersec(int arr1[], int size1, int arr2[], int size2);

int main() {
    int i, n, arr1[50], arr2[50]; 
    printf("Enter size of the arrays: ");
    scanf("%d", &n);

    printf("Enter elements for arr1: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for arr2: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    intersec(arr1, n, arr2, n);

    return 0;
}

void intersec(int arr1[], int size1, int arr2[], int size2) {
    int i, j;
    printf("Intersection of the arrays: ");
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n"); 
}
