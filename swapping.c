#include<stdio.h>
void swap(int *x, int *y)  
{  
    int temp;  
  
    temp = *x;  
    *x    = *y;  
    *y    = temp;  
}  
int main()
{
    int a,b;
    print("enter two number\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    print("after swap %d %d",a,b);
    return 0;
}
