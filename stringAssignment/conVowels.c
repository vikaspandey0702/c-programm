#include <stdio.h>
void strcount(char *s)
{
	int i,cons=0,vow=0;
	for(i=0;s[i];i++)  
    {
        if((s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' || s[i]=='U'))
          vow++;
        else if(s[i]==' ')
         continue;
        else
         cons++;
 	}
    printf("consonent = %d\n",cons);
    printf("vowels = %d\n",vow);
    
}
int main()
{
    char s[1000];  
    printf("Enter  the string: ");
    gets(s);
    strcount(s);
     
}