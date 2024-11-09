#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate an initial block of memory for n integers
    printf("enter the total no. of elements for allocating memory\t");
    int n,i;
    scanf("%d",&n);
    //int* arr =(int*)calloc(n , sizeof(int));
    int* arr =(int*)malloc(n * sizeof(int));
    //typecast is not mandatory when we're declaring variable in pointer
 //or//int* arr =malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;//or when working with void - exit(0);
    }
      printf("Memory allocation Successfully done.\n");
    // Initialize the values
   
    printf("Enter Elements\n");
    for( i =0;i<n;i++)
    {
      printf("arr[%d]: ",i);
      scanf("%d",&arr[i]);
      }
      // Display the original values
      printf("Displaying Initial Elements\n");
    for( i =0;i<n;i++)
    {
      printf("%d\t",arr[i]);
      }

   
    printf("\nEnter new size to add more elements in precious one\t ");
    int m;
    scanf("%d",&m);
    // Resize the block to hold m integers
     arr = realloc(arr, m * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        //free(arr);
        return 1;
    }
       // the block was enlarged,
       //and the new memory locations were not explicitly initialized.  
       printf("Memory reallocation Successfully Done.\n");
      printf("Reallocated Memory space for Elements\n");
    for( i =0;i<n+m;i++)
    {
      printf("%d\t",arr[i]);
      }
      
      printf("\nEnter new Elements\n");
    for( i =n;i<n+m;i++)
    {
      printf("arr[%d]: ",i);
      scanf("%d",&arr[i]);
      }
      // Display the resized block values
      printf("Displaying modified Elements\n");
    for( i =0;i<n+m;i++)
    {
      printf("%d\t",arr[i]);
      }
   

      printf("\n");
    // Free the memory when done
   
    free(arr);
      //freeing the space by removing initial elements
      //or dellocating the memory which is allocated by malloc or calloc
      //but reallocated elements will remains sometime .
    for( i =0;i<n+m;i++)
    {
      printf("%d\t",arr[i]);
      }
      return 0;
}