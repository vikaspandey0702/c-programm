#include <stdio.h>
void strcount(char *s)
{
	int i,space=0;
	for(i=0;s[i];i++)  
    {
          
        if(s[i]==' ')
         space++;
 	}
    printf("Spaces = %d\n",space);
    
}
int main()
{
    char s[1000];  
    printf("Enter  the string: ");
    gets(s);
    strcount(s);
     
}