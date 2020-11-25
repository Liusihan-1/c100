#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100005

/* ���������� */
typedef struct Node {
    char data;              /* ��������Ľ����Ϣ */
    struct Node* LChild;    /* ���������� */
    struct Node* RChild;    /* ���������� */
} BiTNode, * BiTree;

/* ջ�ṹ */
typedef struct elem {
    BiTNode node;    /* ջ��Ԫ�صĽ����Ϣ */
    int flag;        /* ���λ����������Ϊ0����������Ϊ1 */
} ElemType;

typedef struct stack {
    ElemType elem[MAXSIZE];    /* ˳��ջ���� */
    int top;                   /* ջ��ָ�� */
} SeqStack;

/* �Զ��庯������ */
BiTNode* CreateBiTree(BiTNode* root);    /* ��չ�������н��������� */
void PreOrder(BiTree root);              /* �ݹ�������������� */
void InOrder(BiTree root);               /* �ݹ�������������� */
void PostOrder(BiTree root);             /* �ǵݹ������������� */
SeqStack* InitStack(void);               /* ��ʼ��ջ */
int Empty(SeqStack* s);                  /* �п�ջ */
int Push(SeqStack* s, ElemType x);       /* ��ջ */
int Pop(SeqStack* s, ElemType* x);                    /* ��ջ */
ElemType* GetTop(SeqStack* s);           /* ȡջ��Ԫ�� */
int NonLeafNode(BiTree root);            /* ͳ�ƶ������з�Ҷ�ӽ��ĸ��� */
int BiTreeDeepth(BiTree root);           /* ����������ĸ߶� */

/* ������ */
int main(void) {
    BiTNode* root = CreateBiTree(root);
    PreOrder(root);
    printf("\n");
    InOrder(root);
    printf("\n");
    PostOrder(root);
    printf("\n");
    printf("%d\n", NonLeafNode(root));
    printf("%d\n", BiTreeDeepth(root));
    return 0;
}

/* �Զ��庯�� */
BiTNode* CreateBiTree(BiTNode* root) {
    char ch;
    ch = getchar();
    if (ch == '#') {
        return NULL;
    } else {
        root = (BiTNode*)malloc(sizeof(BiTNode));
        root->data = ch;
        root->LChild = CreateBiTree(root->LChild);
        root->RChild = CreateBiTree(root->RChild);
    }
    return root;
}

void PreOrder(BiTree root) {
    if (root) {
        printf("%c", root->data);
        PreOrder(root->LChild);
        PreOrder(root->RChild);
    }
}

void InOrder(BiTree root) {
    if (root) {
        InOrder(root->LChild);
        printf("%c", root->data);
        InOrder(root->RChild);
    }
}

void PostOrder(BiTree root) {
    SeqStack* s = InitStack();           //ջ�ĳ�ʼ�� 
    while (root || !Empty(s)) {          //�ýڵ������ݻ�ջ�ǿս���ѭ�� 
        while (root) {
            ElemType temp;               //��һ����ʱ����temp�����ýڵ�����ݺͱ�־���� 
            temp.node = * root;
            temp.flag = 0;
            Push(s, temp);               //������temp����ջs 
            root = root->LChild;         //���ʸýڵ������ 
        }
        while (!Empty(s) && GetTop(s)->flag == 1) {           //ջ�ǿ���flag=1���ڶ��ξ���ջ���� 
            ElemType* x = GetTop(s);                          //ȡջ�� 
            Pop(s, x);                                        //��ջ
            printf("%c", x->node.data);                       //���ջ�� 
        }
        if (!Empty(s)) {                              //ջ�ǿս���ѭ�� 
            root = GetTop(s)->node.RChild;            //��ջ���Ľڵ�ָ�������Һ��� 
            GetTop(s)->flag = 1;                      //��flag��ֵΪ1 
        }
    }
}

SeqStack* InitStack(void) {
    SeqStack* s;
    s = (SeqStack*)malloc(sizeof(SeqStack));
    s->top = -1;
    return s;
}

int Empty(SeqStack* s) {
    if (s->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int Push(SeqStack* s, ElemType x) {
    if (s->top == MAXSIZE - 1) {
        return 0;    /* ջ��������ջ */
    } else {
        s->top++;
        s->elem[s->top] = x;
        return 1;
    }
}

int Pop(SeqStack* s, ElemType* x) {
    if (Empty(s)) {
        return 0;    /* ջ�ղ��ܳ�ջ */
    } else {
        * x = s->elem[s->top];
        s->top--;
        return 1;
    }
}

ElemType* GetTop(SeqStack* s) {
    if (Empty(s)) {
        return NULL;    /* ջ�� */
    } else {
        return &(s->elem[s->top]);
    }
}

int NonLeafNode(BiTree root) {
    if (!root) {
        return 0;
    } else if (!root->LChild && !root->RChild) {
        return 0;
    } else {
        return NonLeafNode(root->LChild) + NonLeafNode(root->RChild) + 1;
    }
}

int BiTreeDeepth(BiTree root) {
    if (!root) {
        return 0;
    } else {
        if (BiTreeDeepth(root->LChild) > BiTreeDeepth(root->RChild)) {
            return 1 + BiTreeDeepth(root->LChild);
        } else {
            return 1 + BiTreeDeepth(root->RChild);
        }
    }
}

