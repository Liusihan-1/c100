//海盗分赃 
#include <stdio.h>
#include <string.h>
int main()
{
    int d, p, a[100]={0}, f[100]={0};
    scanf("%d %d", &d, &p);
    a[--p] = d;
    int n = p-1, min = 101, count = 0, pos = -1, sum = 0;
    while(n--){
        sum = (p-n+1)/2;  /* 需要争取sum个海盗的支持 */ 
        for(int i=0; i<sum; i++){ /* 找寻当前数组未被标记的最小数，标记后+1 */
            for(int j=n+1; j<=p; j++){
                if(a[j] < min && f[j] == 0){
                    min = a[j]; 
                    pos = j;
                }
            }
            a[pos]++;
            f[pos]++;
            min = 101;
        }
        int k = 0; /* 未被+1的数置0 */
        for(int j=n+1; j<=p; j++){
            if(!f[j]) a[j] = 0;
                else k += a[j];
        }
        a[n] = d - k;
        memset(f, 0, sizeof(f));  /* 清空标记数组f */
    }
    printf("%d\n", a[0]);
    return 0;
}
