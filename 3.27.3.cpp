//ºÚªØµƒ≤Â»Î≈≈–Ú
#include<stdio.h>
int main(){
    int n;
    int a[11];
    int s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    int j=n;
    while(j>=0 && a[j-1]>s){
        a[j]=a[j-1];
        j--;
    }
    a[j]=s;
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
    return 0;
} 
