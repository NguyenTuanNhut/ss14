#include<stdio.h>
#include<string.h>
int main(){
    char c,str[]="nguyentuannhut";
    printf("nhap vao ki tu muon kiem tra\n");
    c=getchar();
    int lenght=strlen(str),dem=0;
    for(int i=0;i<lenght;i++){
        if(str[i]==c){
            dem++;
        }
    }
    printf("so lan xuat hien la %d",dem);
    return 0;
}