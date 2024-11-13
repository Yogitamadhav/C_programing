#include <stdio.h>

void printUnion(int arr1[], int size1, int arr2[], int size2) {
    int unionArr[100]; 
    int k = 0; 
    int i, j, found;

    for (i = 0; i < size1; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (arr1[i] == unionArr[j]) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr1[i];
        }
    }

    for (i = 0; i < size2; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the arrays: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

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

    printUnion(arr1, n, arr2, n);

    return 0;
}
