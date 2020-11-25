#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    char s[100][100];
    int i;
    int max_i, max_len = 0;
    scanf("%d",&N);
		for(i = 0; i < N; i ++)
    {
    	scanf("%s",s[i]);
	}
    for(i = 0; i < N; i ++)
    {
        int l = strlen(s[i]);
        if(max_len <l) 
        {
            max_len = l;
            max_i = i;
        }
    }
	
	printf("The longest is: %s\n", s[max_i]);
    return 0;
}
