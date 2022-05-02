#include <stdio.h>
int max (int[],int);
int main()
int a[]= {20,30,45,67,8};
int n=8,m;
m = max (a,n);
printf("\n max num is %d",m);
return 0;
}
max(int x[],int y)
{
    int t, i;
    t=x[0];
    for(i =1; i<y; i++)
    {
        if (x[i]>t)
            t=x[i];
    }

    return (t);
}