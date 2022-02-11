#include<stdio.h>
int main ()
{
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    switch(num%2)

    {
    case 0:
        printf("the number is even",num);
        break;
    case 1:
        printf("the number is odd",num);
        break;
    }








    return 0;
}