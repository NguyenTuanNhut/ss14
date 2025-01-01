#include<stdio.h>
#include<string.h>
int main(){
    char str[]="nguyen tuan nhut";
    int lenght=strlen(str),dem=1,n;
    for(int i=0;i<lenght;i++){
        if(str[i]==' '){
            dem++;
        }
    }
    printf("%s \n",str);
    printf("hay doan so tu ");
    scanf("%d",&n);
    if(n==dem){
        printf("ban da doan dung");
    }else{
        printf("ban da doan sai");
    }
    return 0;
}