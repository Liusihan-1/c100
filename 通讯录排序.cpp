#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {

    char name[11];
    int birth;
    char phone[18];

}friends;

int main()
{

    friends *p,t;
    int n,i,j;

    scanf("%d",&n);
    getchar();
    p=(friends*)malloc(sizeof(friends)*n);

    for(i=0;i<n;i++){

        scanf("%s %d %s",p[i].name,&p[i].birth,p[i].phone);

    }

    for(i=0;i<n;i++){

        for(j=0;j<n-1-i;j++){

            if(p[j].birth>p[j+1].birth){

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;

            }
        }
    }

    for(i=0;i<n;i++){

        printf("%s %d %s\n",p[i].name,p[i].birth,p[i].phone);

    }

    free(p);

    return 0;

}
