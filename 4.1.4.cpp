//∑Ω’Û—≠ª∑”““∆
#include<stdio.h>
int main(){	
    int n,m;	
    scanf("%d",&m); 
//	printf("%d\n",m);	
    scanf("%d",&n);		
            m=m%n;	
    int a[n*n];	
    for(int i=0;i<n*n;i++){		
        scanf("%d",&a[i]);	}	
    for(int i=0;i<n*n;i+=n){		
        int k=0;		
        for(int j=i;j<i+n;j++,k++){				
            if(k>=n-m){					
                printf("%d ",a[j]);			
            }					
        }		
        k=0;		
        for(int j=i;j<i+n;j++,k++){			
            if(k<n-m){				
                printf("%d ",a[j]);				
            } 		
        }		
        printf("\n");	
        }	
}
 
