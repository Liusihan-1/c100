//Êı×Ö¼ÓÃÜ 
#include<stdio.h>
#include<string.h>
int main(){
    char str[5];
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        str[i]=(str[i]-'0'+9)%10+'0';
    }
    int t1=str[0];
    str[0]=str[2];
    str[2]=t1;

    int t2=str[3];
    str[3]=str[1];
    str[1]=t2;
    printf("The encrypted number is %s",str);
    return 0;
} 
