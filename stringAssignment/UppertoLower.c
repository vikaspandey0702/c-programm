#include <stdio.h>  
#include <conio.h>  
    
void upr_lwr (char *str)  
{  
    int i;    
    for ( i = 0; str[i]; i++)  
    {  
        if ( str [i] >= 65 && str [i] <= 90)  
        str[i] = str[i] + 32;   
    }  
}  
int main ()  
{  
    char str[100];   
      
    printf (" Enter the upper case string: ");  
    gets (str);   
    upr_lwr (str);  
  
    printf (" \n The lowercase string is: %s", str);  
          
    return 0;  
  
}  