#include<stdio.h>
void swap(int x, int y)  
{  
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b ; 
   
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