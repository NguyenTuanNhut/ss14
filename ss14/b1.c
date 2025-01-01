#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("nhap chuoi\n");
fgets(str,100,stdin);
int lengt=strlen(str);
str[16]='\0';
printf("%s %d",str,lengt);
return 0;
}