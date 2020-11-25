#include <stdio.h>
#include <stdlib.h>
#define M 100 
typedef struct node  
{  
    int data;
	int cishu;
    struct node *lchild;  
    struct node *rchild;  //树节点中cishu是为了计数用。在后序遍历中，子树的根节点在第一次遍历的时候不会输出，只有在第二次遍历的时候才输出。
}bitree;
 
 
typedef struct stack 
{
	bitree *elements[M];
	int top;
}seqstack;//定义一个储存树类型地址的栈，方便遍历的时候追踪到树的地址。

bitree *root;//定义一个树根
seqstack s;//定义栈

void setnull()//初始化栈
{
	s.top =0;
}
 
void push(bitree *temp)//入栈操作
{
	s.elements[s.top++] = temp;
}
 
bitree *pop()//取栈顶并出栈顶
{
	return s.elements[--s.top];
}
 
int empty()//判断空栈
{
	return s.top == 0;
}
 
bitree *creat()   /*建立二叉树的递归算法*/
{ bitree *t;
  int x;
  scanf("%d",&x);
  if(x==0) t=NULL; /*以x=0表示输入结束*/
  else{
  t=(bitree*)malloc(sizeof(bitree));//动态生成结点t,分别给结点t的数据域、左右孩子域  
  t->data=x;                  //赋值,给左右孩子域赋值时用到了递归的思想。
  t->lchild=creat();
  t->rchild=creat();
  }
  return t;
}

void preorder(bitree *t)//前序遍历的非递归算法
{
	bitree *temp = t;//定义一个树节点，用它来遍历
	while(temp != NULL || s.top != 0)
	{
		while(temp != NULL)//先遍历左孩子，并输出。
		{
			printf("%4d",temp->data);
			push(temp);
			temp = temp->lchild;
		}
		if(s.top != 0)//当左孩子遍历完后，取栈顶，找右孩子。此时循环还没有结束，再遍历它的左孩子，直至孩子全部遍历结束。
		{
			temp = pop();
			temp = temp->rchild;
		}
	}
	printf("\n");
}
 
void inorder(bitree *t)//中序遍历的非递归算法
{
	bitree *temp = t;
	while(temp != NULL||s.top != 0)
	{
		while(temp != NULL)//先把左孩子入栈，所有左孩子入栈结束
		{
			push(temp);
			temp = temp->lchild;
		}
		if(s.top != 0)//左孩子入栈结束，取栈顶，输出栈顶元素，遍历右孩子
		{
			temp = pop();
			printf("%4d",temp->data);
			temp = temp->rchild;
		}
	}
	printf("\n");
}
 
 
void laorder(bitree *root)//后序遍历的非递归算法
{
    bitree *temp = root;
	while(temp!=NULL||s.top!=0)
    {
        while(temp!= NULL)
        {
            temp->cishu=1;       // 当前节点首次被访问
            push(temp);
            temp=temp->lchild;
        }
        if(s.top!=0)
        {
            temp=pop( );
            if(temp->cishu == 1)   // 第一次出现在栈顶
            {

                temp->cishu++;
                push(temp);
                temp=temp->rchild;
            }
            else
				if(temp->cishu==2)//第二次输出并制空，防止陷入死循环
				{
                printf("%4d",temp->data);
                temp=NULL;
				}
        }
    }
	printf("\n");
}

 
int main()
{
	bitree *root;//创建根
	setnull();//制空栈
	root=creat();//创建二叉树:尝试输入：1 2 3 0 0 4 0 0 5 6 0 0 7 0 0
	printf("前序遍历:\n");
	preorder(root);
	printf("中序遍历:\n");
	inorder(root);
	printf("后序遍历:\n");
	laorder(root);
	return 0;
}

