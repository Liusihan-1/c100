//求整数序列中出现次数最多的数
#include<stdio.h>
int main(){
    int n;
    int a[1010];
    int max=0;
    int t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>max){
            max=c;
            t=a[i];
        }
    }
    printf("%d %d",t,max);
    return 0;
} 
