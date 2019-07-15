#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50];
scanf("%s",a);
int j=strlen(a);
for (int i=0;i<strlen(a);i++)
 {
  b[j]=a[i];
  j--;
  }
  for(int i=1;i<strlen(b);i++)
  {
   printf("%c",b[i]);
  }
  
  return 0;
 }  
