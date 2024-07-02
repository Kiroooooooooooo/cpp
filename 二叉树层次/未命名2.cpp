#include <stdio.h>
#include <stdlib.h>
#define ElementType int

//��ʼ����ͷ�Ͷ�βָ��
int front = 0, rear = 0;

typedef struct BinTNode{
    ElementType data; 
    struct BinTNode * left; 
    struct BinTNode * right;
}BinTNode, *BinTree;

BinTNode * CreateBinTree(BinTNode *T) {
    T=(BinTNode*)malloc(sizeof(BinTNode));
    T->data='A';
    T->left=(BinTNode*)malloc(sizeof(BinTNode));
    T->left->data='B';
    T->right=(BinTNode*)malloc(sizeof(BinTNode));
    T->right->data='C';
  
    T->left->left=(BinTNode*)malloc(sizeof(BinTNode));
    T->left->left->data='D';
    T->left->right=(BinTNode*)malloc(sizeof(BinTNode));
    T->left->right->data='E';
    T->left->right->left=NULL;
    T->left->right->right=NULL;  
    T->left->left->left=(BinTNode*)malloc(sizeof(BinTNode));
    T->left->left->left->data='H';
    T->left->left->left->left=NULL;
    T->left->left->left->right=NULL;
    T->left->left->right=(BinTNode*)malloc(sizeof(BinTNode));
    T->left->left->right->data='I';
    T->left->left->right->left=NULL;
    T->left->left->right->right=NULL;
      
    T->right->left=(BinTNode*)malloc(sizeof(BinTNode));
    T->right->left->data='F';
    T->right->left->left=NULL;
    T->right->left->right=NULL;
    T->right->right=(BinTNode*)malloc(sizeof(BinTNode));
    T->right->right->data='G';
    T->right->right->left=NULL;
    T->right->right->right=NULL;

    return T;
}

//���
void EnQueue(BinTNode ** queue,BinTNode * elem) {
    queue[rear++] = elem;
}

//����
BinTNode* DeQueue(BinTNode** queue) {
    return queue[front++];
}

//���
void printElement(BinTNode * elem) {
    printf("%c ",elem->data);
}

void levelOrderTraverse(BinTNode * tree) {
    BinTNode * T;
    BinTree queue[20];      // �������
    
    EnQueue(queue, tree);   // ��ʼ������������
    while(front < rear) {   // ���в�Ϊ��
        T = DeQueue(queue);     // ������
        printElement(T);
        // �����ӵĽ�����Һ����������
        if (T->left!= NULL) {
            EnQueue(queue, T->left);
        }
        if (T->right!= NULL) {
            EnQueue(queue, T->right);
        }
    }
}

int main() {
    BinTNode * tree;
    tree = CreateBinTree(tree);
    printf("��α���: ");
    levelOrderTraverse(tree);
    printf("\n");
    return 0;
}
