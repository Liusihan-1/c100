#include<stdio.h>
int sub(int *a, int n)
{
    int t,i;
    int max = a[0], min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    printf("difference value = %d", (max-min));
}
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    sub(a,10);
    return 0;
}

