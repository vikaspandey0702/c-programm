#include<stdio.h>
int main()
{
 char str1[30], str2[30];
 int i;

 printf("Enter string:\n");
 gets(str1);
 printf("str1 is: %s\n",str1);
 
 strcpy(str2, str1);
 
 printf("str2 is: %s\n", str2);
 
 return 0;
}

void strcpy(char str2[30], char str1[30])
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}