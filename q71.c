#include<stdio.h>

int dele(int *n, int arr1[], int e);

void main(){
    int i, n, e, arr1[50], arr2[50];

    printf("Enter size of the arrays: ");
    scanf("%d", &n);

    printf("Enter elements for arr1: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &e);
    dele(&n, arr1, e);
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

}

int dele(int *n, int arr1[], int e){
    int i, pos=-1;
    for(i=0;i<*n;i++){
        if(arr1[i]==e){
            pos=i;
            break;
        }
    }
    if (pos!=-1){
        for(i=pos; i<*n-1;i++){
            arr1[i]=arr1[i+1];
        }
        (*n)--;
        printf("Element %d deleted successfully.\n", e);
    } else {
        printf("Element %d not found in the array.\n", e);
    }
}