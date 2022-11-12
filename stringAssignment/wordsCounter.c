#include <stdio.h>
void strcount(char *s)
{
	int i,space=0,w=0;
	for(i=0;s[i];i++)  
    {
          
        if(s[i]==' ')
         space++;
 	}
 	w=space+1;
    printf("words= %d\n",w);
    
}
int main()
{
    char s[1000];  
    printf("Enter  the string: ");
    gets(s);
    strcount(s);
     
}