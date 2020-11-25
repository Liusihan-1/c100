#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
#define M 2*N-1
//哈夫曼树结构
typedef struct node{
    int weight;
    int parent, leftChild, rightChild;
    char data;
}HTNode, HuffmanTree[M+1];//0号元素不使用 
//指针数组记录编码结构
typedef char * HuffmanCode[N+1]; 
//找两个最小值的函数
void select(HuffmanTree ht, int n, int *s1, int *s2)//传递地址，为了可以返回两个值 
{
    int temp;
    for (int i = 1; i <= n; i++) {
        if (ht[i].parent == 0) {	//将第一个没有在树中的结点权值记为 标志 
            temp = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (ht[i].parent == 0) {
            if (ht[i].weight < ht[temp].weight)	//将每个未在树中的结点的权值与标记权值比较大小 
                temp = i;
        }
    }
    *s1 = temp;	//找到第一个最小值
	//寻找第二个最小值 
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
//创建哈夫曼树
void CrtHuffmanTree(HuffmanTree ht, int w[], int n) {
    int m = 2*n-1;
    for (int i = 1; i <= n; i++)//0号元素跳过不用 
	{
        ht[i].weight = w[i];
        ht[i].data = 'A'+i-1;
        //都未在树中，将三个域置为0 
        ht[i].parent = 0;
        ht[i].leftChild = 0;
        ht[i].rightChild = 0;
    }
    for (int i = n+1; i <= m; i++) //存放非叶子结点的权值为0 
	{
        ht[i].weight = 0;
        ht[i].parent = 0;
        ht[i].leftChild = 0;
        ht[i].rightChild = 0;
    }
    for (int i = n+1; i <= m; i++) //寻找范围最值范围是 从n到2*n-1 
	{
        int s1, s2;
        select(ht, i-1, &s1, &s2);
        ht[i].weight = ht[s1].weight+ht[s2].weight;
        //默认为 左子树权值小于右子树权值 的顺序 
        ht[i].leftChild = s1;
        ht[i].rightChild = s2;
        ht[s1].parent = i;
        ht[s2].parent = i;
    }
}
//哈夫曼编码
void CrtHuffmanCode(HuffmanTree ht, HuffmanCode hc, int n){
    char *cd;
    int start;
    cd = (char*)malloc(n*sizeof(char));
    cd[n-1] = '\0';
    for (int i = 1; i <= n; i++)//从叶子结点开始判断是左子树还是右子树，编码数组倒序存储 
	{
        start = n-1;
        int c = i, p = ht[i].parent; //p记录根结点 c用于循环叶子结点 
        while(p) //判断当前是父的左右 
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
//哈夫曼译码
void DeCode (HuffmanTree ht, char ch[]) {
    int m = 11;//由于只有6个节点，这里直接写11
    for (int i = 0; i < strlen(ch); i++) {
    	//是0进入左子树，否则进入右子树，直至打印出叶子结点的前缀编码 
        if (ch[i] == '0')
            m = ht[m].leftChild;
        else
            m = ht[m].rightChild;
        if (ht[m].leftChild == 0) {
            printf("%c", ht[m].data);
            m = 11;	//每次都从根开始 
        }
    }
}

int main(void) {
    HuffmanTree HFMTree;
    int w[7];
    for (int i = 1; i <= 6; i++) {
        scanf("%d", &w[i]);
    }
    char ch[10]; //编码时输入字符串
    char ch1[100];//译码时输入字符串
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

