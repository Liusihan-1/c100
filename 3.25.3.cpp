//求一批整数中出现最多的个位数字
#include <stdio.h>  
  
int main() {  
    int n,i;  
    int number[10]={0};
	int max = 0;  
 
    scanf("%d", &n);  
    for (i=0; i<n; i++) {  
        int a;  
        scanf("%d ", &a);  
        if(a == 0)
        {
            number[0]++;
        }
        while (a > 0) {  
            number[a%10]++;  
            a /= 10;  
        }  
    }  
    
    for (i=0; i<10; i++) {  
        if (max < number[i]) {  
            max = number[i];  
        }  
    }  
      
    printf("%d:", max);  
    for (i=0; i<10; i++) {  
        if (max == number[i]) {  
            printf(" %d",i);  
        }  
    }  
      
    return 0;  
} 
