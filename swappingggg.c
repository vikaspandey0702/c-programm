#include<stdio.h>
void swap(int x, int y)  
{  
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y ; 
   
}  
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swap %d %d",a,b);
    return 0;
}
