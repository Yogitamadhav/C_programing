#include<stdio.h>
int main()
{
    int arr_1[10],i,j,temp,n,largest;
    printf("Enter any number for number of elements");
    scanf("%d",&n);
    printf("Enter the elements for array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr_1[i]);
    }        
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        {
            if(arr_1[j]>arr_1[i])
            {
                temp=arr_1[j];
                arr_1[j]=arr_1[i];
                arr_1[i]=temp;
            }
        }
    }
    largest=arr_1[0];
    for(i=1;i<n;i++)
    {
        if(arr_1[i]!=largest)
        {
            printf("%d is the second largest number",arr_1[i]);
            break;
        }
    }
}