//Wap to insert New value in the array (sorted list )
#include<stdio.h>
#include<stdlib.h>

int * correct(int n)
{
    int *q;
    int m=n+1;
    q=(int*)malloc(sizeof(int)*m);

    printf("Enter %d elements in sorted order array:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &q[i]);
    }
    int a,j,i;
    printf("new value to be inserted:");
    scanf("%d",&a);
    for(j=0; j<n; j++)
    {
        if(a<q[j])
          break;
    }
    for(i=m; i>j; i--)
    {
        q[i]=q[i-1];
    }
    q[j]=a;
    return q;
}
int main()
{
    int n;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=correct(n);
    printf("after inserting\n");
    for(int i=0; i<=n; i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}