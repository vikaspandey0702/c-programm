//Wap to find the maximum and minimum element in an array.

#include<stdio.h>
#include<stdlib.h>
void find(int arr[],int n)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
          max=arr[i];
        if(arr[i]<min)
          min=arr[i];
    }
    printf("MAX is %d AND MIN elements is %d in array",max,min);
}

int main()
{
    int n;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=(int*)malloc(sizeof(int)*n);

    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    find(p,n);

    return 0;
}