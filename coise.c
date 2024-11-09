#include <stdio.h>
int a,b;
int choice;
// Driver Code
int main()
{
    printf("The number: \n ");
    scanf("%d%d", &a, &b);
    printf("choose: \n ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("addition is %d",a+b);
        break;
    case 2:
        printf("substraction is %d",a-b);
        break;
    case 3:
        printf("multiplication is %d",a*b);
        break;
    case 4:
        printf("division is %d",a/b);
        break;
    case 5:
        printf("modulation is %d",a%b);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}

