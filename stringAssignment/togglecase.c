#include <stdio.h>  
#include <conio.h>  
  
void lwrtoUppr (char *str)  
{  
    int i;    
    for ( i = 0; str[i]; i++)  
    {  
        if ( str [i] >= 97 && str [i] <= 122)  
        str[i] = str[i] -32; 
        else if (str [i] >= 65 && str [i] <= 90)
        str[i] = str[i]+32;

    }  
}  
int main ()  
{  
    char str[100];   
      
    printf (" Enter the lower case string: ");  
    gets (str);      
    lwrtoUppr (str);  
  
    printf (" \n The lowercase string is: %s", str);  
          
    return 0;  
  
}  