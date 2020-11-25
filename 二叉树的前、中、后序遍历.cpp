#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define MAXSIZE 100
 
/**���������ݽṹ����**/
typedef struct BiTreeNode
{
    char data;             //���ڵ� 
    struct BiTreeNode *left;          //��ڵ� 
    struct BiTreeNode *right;         //�ҽڵ� 
}BiTreeNode,*BiTree;                  //�������Ͷ�����ָ��  

/**�������Ľ���--��������ʽ����--����**/
void CreateBiTree(BiTree *T)
{
    char val;
    scanf("%c",&val);
 
    if(val == '#')
        *T = NULL;  //null��ʾΪ��֦
 
    else
    {
        *T = (BiTree)malloc(sizeof(BiTreeNode));
        (*T)->data = val;
        CreateBiTree(&(*T)->left);
        CreateBiTree(&(*T)->right);
    }
}
 
 
/**�������  ������**/
void PreOrderTravel(BiTree T)
{
    if(T==NULL)
        return;
    printf("%c",T->data);
    PreOrderTravel(T->left);
    PreOrderTravel(T->right);
}
/*void InOrder(BiTree root)
{
	int count=0;
	if(root)
	{
		InOrder(root->left);
		if(root->left!=NULL||root->right!=NULL)
			count++;
		InOrder(root->right);
	}
	printf("%d",count);
} */



 
/**������� �����**/
void InOrderTravel(BiTree T)
{
    if(T==NULL)
        return;
    InOrderTravel(T->left);
    printf("%c",T->data);
    InOrderTravel(T->right);
}
 
/**������� ���Ҹ�**/
void TailOrderTravel(BiTree T)
{
    if(T==NULL)
        return;
    TailOrderTravel(T->left);
    TailOrderTravel(T->right);
    printf("%c",T->data);
}
int main()
{
	//int count=0;
 
    //printf("���Դ���\n");
    BiTree T;
    T = (BiTree)malloc(sizeof(BiTreeNode));
 
    //printf("�����������������ʽ�����������ֵ(�ս��Ϊ#):\n");
    CreateBiTree(&T);
 
 
    //printf("����ʽ���������\n");
    PreOrderTravel(T);
    printf("\n");
 
    //printf("����ʽ���������\n");
    InOrderTravel(T);
    //printf("%d",count);
    printf("\n");
 
    //printf("����ʽ���������\n");
    TailOrderTravel(T);
    printf("\n");
    return 0;
}

