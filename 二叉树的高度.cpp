#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define MAXSIZE 100
 
/**���������ݽṹ����**/
typedef struct BiTreeNode//���� 
{
    char data;//���ڵ� 
    struct BiTreeNode *left;            //��ڵ� 
    struct BiTreeNode *right;           //�ҽڵ� 
}BiTreeNode,*BiTree;          //���������Ͷ�����ָ�� 
 
/**�������Ľ���--��������ʽ����--����**/
void CreateBiTree(BiTree *T)   //���ﴫ��ȥ����ָ���ָ�룬����ָ����ڵ��ָ��ĵ�ַ����ô��*T������ָ��ĵ�ַ�� 
{
    char val;
    scanf("%c",&val);
 
    if(val == '#')
        *T = NULL;                    //null��ʾΪ��֦
 
    else
    {
        *T = (BiTree)malloc(sizeof(BiTreeNode)); 
        (*T)->data = val;             //���ɸ��ڵ� 
        CreateBiTree(&(*T)->left);             //���������� 
        CreateBiTree(&(*T)->right);            //���������� 
    }
}
//����߶� 
int GetHeight(BiTree T)// ���ﴫ���T��ָ�룻����*BiTree��ʱ�����ָ�����͵ı�������ôBiTree����Ķ���ָ�� 
{
 int hl, hr, max;
 if (T != NULL)
 {
  hl = GetHeight(T->left);
  hr = GetHeight(T->right);
  max =( hl > hr ? hl : hr)+1;
  return max;
 }
 else
  return 0;
}
int main()
{
	int count=0;
    BiTree T;               //�����ָ��T 
    T = (BiTree)malloc(sizeof(BiTreeNode));           //ָ�����͵Ľ�� 
    CreateBiTree(&T);
    GetHeight(T);
    printf("%d",GetHeight(T));
    return 0;
}

