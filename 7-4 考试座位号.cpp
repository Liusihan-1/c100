#include <stdio.h>

int main() {
    struct student {
        char ID[17];
        int tests,exams;
    }pat[1000];
    
    int n,m,i,j;
    int find[1000]={0};
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
        scanf("%s %d %d", pat[i].ID, &pat[i].tests, &pat[i].exams);
    scanf("%d", &m);
    
    for(j = 0; j < m; j++){
        scanf("%d", &find[j]);
        for(i = 0; i < n; i++)
            if(find[j] == pat[i].tests)
                printf("%s %d\n", pat[i].ID, pat[i].exams);
    }
    return 0;
}

