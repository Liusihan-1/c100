#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
#define M 2*N-1
//���������ṹ
typedef struct node{
    int weight;
    int parent, leftChild, rightChild;
    char data;
}HTNode, HuffmanTree[M+1];//0��Ԫ�ز�ʹ�� 
//ָ�������¼����ṹ
typedef char * HuffmanCode[N+1]; 
//��������Сֵ�ĺ���
void select(HuffmanTree ht, int n, int *s1, int *s2)//���ݵ�ַ��Ϊ�˿��Է�������ֵ 
{
    int temp;
    for (int i = 1; i <= n; i++) {
        if (ht[i].parent == 0) {	//����һ��û�������еĽ��Ȩֵ��Ϊ ��־ 
            temp = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (ht[i].parent == 0) {
            if (ht[i].weight < ht[temp].weight)	//��ÿ��δ�����еĽ���Ȩֵ����Ȩֵ�Ƚϴ�С 
                temp = i;
        }
    }
    *s1 = temp;	//�ҵ���һ����Сֵ
	//Ѱ�ҵڶ�����Сֵ 
    for (int i = 1; i <= n; i++) {
        if (ht[i].parent == 0 && i != *s1) {
            temp = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (ht[i].parent == 0 && i != *s1)
        {
            if (ht[i].weight < ht[temp].weight)
                temp = i;
        }
    }
    *s2 = temp;
}
//������������
void CrtHuffmanTree(HuffmanTree ht, int w[], int n) {
    int m = 2*n-1;
    for (int i = 1; i <= n; i++)//0��Ԫ���������� 
	{
        ht[i].weight = w[i];
        ht[i].data = 'A'+i-1;
        //��δ�����У�����������Ϊ0 
        ht[i].parent = 0;
        ht[i].leftChild = 0;
        ht[i].rightChild = 0;
    }
    for (int i = n+1; i <= m; i++) //��ŷ�Ҷ�ӽ���ȨֵΪ0 
	{
        ht[i].weight = 0;
        ht[i].parent = 0;
        ht[i].leftChild = 0;
        ht[i].rightChild = 0;
    }
    for (int i = n+1; i <= m; i++) //Ѱ�ҷ�Χ��ֵ��Χ�� ��n��2*n-1 
	{
        int s1, s2;
        select(ht, i-1, &s1, &s2);
        ht[i].weight = ht[s1].weight+ht[s2].weight;
        //Ĭ��Ϊ ������ȨֵС��������Ȩֵ ��˳�� 
        ht[i].leftChild = s1;
        ht[i].rightChild = s2;
        ht[s1].parent = i;
        ht[s2].parent = i;
    }
}
//����������
void CrtHuffmanCode(HuffmanTree ht, HuffmanCode hc, int n){
    char *cd;
    int start;
    cd = (char*)malloc(n*sizeof(char));
    cd[n-1] = '\0';
    for (int i = 1; i <= n; i++)//��Ҷ�ӽ�㿪ʼ�ж����������������������������鵹��洢 
	{
        start = n-1;
        int c = i, p = ht[i].parent; //p��¼����� c����ѭ��Ҷ�ӽ�� 
        while(p) //�жϵ�ǰ�Ǹ������� 
		{
            --start;
            if (ht[p].leftChild == c)
                cd[start] = '0';
            else
                cd[start] = '1';
            c = p;
            p = ht[p].parent;
        }
        hc[i] = (char*)malloc((n-start)*sizeof(char));
        strcpy(hc[i], &cd[start]);
    }
    free(cd);
}
//����������
void DeCode (HuffmanTree ht, char ch[]) {
    int m = 11;//����ֻ��6���ڵ㣬����ֱ��д11
    for (int i = 0; i < strlen(ch); i++) {
    	//��0���������������������������ֱ����ӡ��Ҷ�ӽ���ǰ׺���� 
        if (ch[i] == '0')
            m = ht[m].leftChild;
        else
            m = ht[m].rightChild;
        if (ht[m].leftChild == 0) {
            printf("%c", ht[m].data);
            m = 11;	//ÿ�ζ��Ӹ���ʼ 
        }
    }
}

int main(void) {
    HuffmanTree HFMTree;
    int w[7];
    for (int i = 1; i <= 6; i++) {
        scanf("%d", &w[i]);
    }
    char ch[10]; //����ʱ�����ַ���
    char ch1[100];//����ʱ�����ַ���
    scanf("%s", ch);
    scanf("%s", ch1);
    CrtHuffmanTree(HFMTree, w, 6);
    HuffmanCode HFMCode;
    CrtHuffmanCode(HFMTree, HFMCode, 6);
    for(int i = 1; i <= 6; i++) {
        printf("%c:%s\n",'A'+i-1, HFMCode[i]);
    }
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] == 'A')
            printf("%s", HFMCode[1]);
        else if (ch[i] == 'B')
            printf("%s", HFMCode[2]);
        else if (ch[i] == 'C')
            printf("%s", HFMCode[3]);
        else if (ch[i] == 'D')
            printf("%s", HFMCode[4]);
        else if (ch[i] == 'E')
            printf("%s", HFMCode[5]);
        else if (ch[i] == 'F')
            printf("%s", HFMCode[6]);
    }
    printf("\n");
    DeCode(HFMTree, ch1);
    return 0;
}

