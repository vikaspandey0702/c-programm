//Wap to sort elements of the array in descending order. 
#include<stdio.h>
#include<stdlib.h>
int * sort(int n)
{   int *q;

    q=(int*)malloc(sizeof(int)*n);

    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &q[i]);
    }
    int temp;
    for (int i = 0; i < n;i++){
      for (int j = i + 1; j < n;j++){
         if (q[i] < q[j]){
            temp = q[i];
            q[i] = q[j];
            q[j] = temp;
         }
      }
   }
   return q;
}

int main()
{
    int n;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=sort(n);
    printf("after sorting\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}