//将数组中的数逆序存放
#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    int i=0;
    for(i;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    int h=0,k=n-1;
    for(h;h<n;h++){
        b[h]=a[k];
        k--;
        printf("%d",b[h]);
        if(k>=0){
            printf(" ");
        }
    }
    return 0;
}
 
