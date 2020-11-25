#include <stdio.h>
#include <stdlib.h>
#define M 100 
typedef struct node  
{  
    int data;
	int cishu;
    struct node *lchild;  
    struct node *rchild;  //���ڵ���cishu��Ϊ�˼����á��ں�������У������ĸ��ڵ��ڵ�һ�α�����ʱ�򲻻������ֻ���ڵڶ��α�����ʱ��������
}bitree;
 
 
typedef struct stack 
{
	bitree *elements[M];
	int top;
}seqstack;//����һ�����������͵�ַ��ջ�����������ʱ��׷�ٵ����ĵ�ַ��

bitree *root;//����һ������
seqstack s;//����ջ

void setnull()//��ʼ��ջ
{
	s.top =0;
}
 
void push(bitree *temp)//��ջ����
{
	s.elements[s.top++] = temp;
}
 
bitree *pop()//ȡջ������ջ��
{
	return s.elements[--s.top];
}
 
int empty()//�жϿ�ջ
{
	return s.top == 0;
}
 
bitree *creat()   /*�����������ĵݹ��㷨*/
{ bitree *t;
  int x;
  scanf("%d",&x);
  if(x==0) t=NULL; /*��x=0��ʾ�������*/
  else{
  t=(bitree*)malloc(sizeof(bitree));//��̬���ɽ��t,�ֱ�����t�����������Һ�����  
  t->data=x;                  //��ֵ,�����Һ�����ֵʱ�õ��˵ݹ��˼�롣
  t->lchild=creat();
  t->rchild=creat();
  }
  return t;
}

void preorder(bitree *t)//ǰ������ķǵݹ��㷨
{
	bitree *temp = t;//����һ�����ڵ㣬����������
	while(temp != NULL || s.top != 0)
	{
		while(temp != NULL)//�ȱ������ӣ��������
		{
			printf("%4d",temp->data);
			push(temp);
			temp = temp->lchild;
		}
		if(s.top != 0)//�����ӱ������ȡջ�������Һ��ӡ���ʱѭ����û�н������ٱ����������ӣ�ֱ������ȫ������������
		{
			temp = pop();
			temp = temp->rchild;
		}
	}
	printf("\n");
}
 
void inorder(bitree *t)//��������ķǵݹ��㷨
{
	bitree *temp = t;
	while(temp != NULL||s.top != 0)
	{
		while(temp != NULL)//�Ȱ�������ջ������������ջ����
		{
			push(temp);
			temp = temp->lchild;
		}
		if(s.top != 0)//������ջ������ȡջ�������ջ��Ԫ�أ������Һ���
		{
			temp = pop();
			printf("%4d",temp->data);
			temp = temp->rchild;
		}
	}
	printf("\n");
}
 
 
void laorder(bitree *root)//��������ķǵݹ��㷨
{
    bitree *temp = root;
	while(temp!=NULL||s.top!=0)
    {
        while(temp!= NULL)
        {
            temp->cishu=1;       // ��ǰ�ڵ��״α�����
            push(temp);
            temp=temp->lchild;
        }
        if(s.top!=0)
        {
            temp=pop( );
            if(temp->cishu == 1)   // ��һ�γ�����ջ��
            {

                temp->cishu++;
                push(temp);
                temp=temp->rchild;
            }
            else
				if(temp->cishu==2)//�ڶ���������ƿգ���ֹ������ѭ��
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
	bitree *root;//������
	setnull();//�ƿ�ջ
	root=creat();//����������:�������룺1 2 3 0 0 4 0 0 5 6 0 0 7 0 0
	printf("ǰ�����:\n");
	preorder(root);
	printf("�������:\n");
	inorder(root);
	printf("�������:\n");
	laorder(root);
	return 0;
}

