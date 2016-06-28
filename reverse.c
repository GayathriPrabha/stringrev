#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0;
int temp;
char str[100];
printf("Enter the string");
gets(str);
i=0;j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("Reverse of string is:%s",str);
return 0;
}
