//wap to find the second largest element in an array. 
#include<stdio.h>
#include<stdlib.h>

int secd_max(int arr[],int n)
{

    int max1=arr[0];
    int max2=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
          max2=arr[i];
    }
    return max2;
}



int main()
{
    int n,max;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Enter %d elements in array:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    max=secd_max(p,n);
    printf("SECOND MAXIMUM ELEMENT IS %d",max);
    return 0;
}