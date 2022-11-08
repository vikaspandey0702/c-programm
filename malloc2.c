//Wap to find the sum of all elements of the array.
#include<stdio.h>
#include<stdlib.h>

int * sum(int n)
{   
    int *q;

    q=(int*)malloc(sizeof(int)*n);
    printf("Entered number of elements: %d\n", n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
    }

    return q;
}
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int *p =sum(n);

    int Sum=0;

    for(int i=0;i<n;i++)
    {
        Sum+=p[i];
    }
    printf("sum is :%d",Sum);
    return 0;
}