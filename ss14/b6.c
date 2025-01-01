#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[]="nguyen15tuan02nhut06de17";
    int lenght=strlen(str),dem=0,n;
    for(int i=0;i<lenght;i++){
        if(isalpha(str[i])){
             dem++;
        }
    }
    printf("%s\n",str);
    printf("hay dem cac ki tu la chu cai\n");
    scanf("%d",&n);
     if(n==dem){
        printf("ban da doan dung");
    }else{
        printf("ban da doan sai");
    }
    return 0;
}