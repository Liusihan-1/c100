#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define MAXSIZE 100
 
/**二叉树数据结构定义**/
typedef struct BiTreeNode//链表 
{
    char data;//根节点 
    struct BiTreeNode *left;            //左节点 
    struct BiTreeNode *right;           //右节点 
}BiTreeNode,*BiTree;          //二叉树结点和二叉树指针 
 
/**二叉树的建立--按照先序方式建立--插入**/
void CreateBiTree(BiTree *T)   //这里传进去的是指针的指针，就是指向根节点的指针的地址，那么（*T）就是指针的地址了 
{
    char val;
    scanf("%c",&val);
 
    if(val == '#')
        *T = NULL;                    //null表示为空枝
 
    else
    {
        *T = (BiTree)malloc(sizeof(BiTreeNode)); 
        (*T)->data = val;             //生成根节点 
        CreateBiTree(&(*T)->left);             //建造左子树 
        CreateBiTree(&(*T)->right);            //建造右子树 
    }
}
//计算高度 
int GetHeight(BiTree T)// 这里传入的T是指针；定义*BiTree的时候就是指针类型的别名，那么BiTree定义的都是指针 
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
    BiTree T;               //定义的指针T 
    T = (BiTree)malloc(sizeof(BiTreeNode));           //指针类型的结点 
    CreateBiTree(&T);
    GetHeight(T);
    printf("%d",GetHeight(T));
    return 0;
}

