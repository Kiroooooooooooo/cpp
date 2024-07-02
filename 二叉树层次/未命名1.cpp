
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>

#define TRUE  1
#define FALSE 0
#define OK    1
#define ERROR  0
#define INFEASIBLE -1
#define OVERFLOW   -2    //分配内存出错

typedef int  Status;     //函数返回值类型
typedef int  ElemType;   //用户定义的数据类型
typedef struct BiNode{
	ElemType data;
	struct BiNode *left,*right;
}BiNode,*pBiNode;


Status InsertRight(pBiNode &root,ElemType e);
Status InsertLeft(pBiNode &root,ElemType e);


Status InitBiTree(pBiNode &tree){
	tree=(pBiNode)malloc(sizeof(BiNode));
	if(!tree) return OVERFLOW;
	tree->data=-999999;
	tree->left=NULL;
	tree->right=NULL;
	return OK;
}
Status BiTreeEmpty(pBiNode root){
	if(root==NULL) return ERROR;
	return root->left==root->right && root->data==-999999;
}

Status HasNoNode(pBiNode root){
	if(root==NULL) return ERROR;
	return root->left==root->right ;
}

Status CreatTreeNode(pBiNode &node,ElemType e){
	node=(pBiNode)malloc(sizeof(BiNode));
	if(!node) return OVERFLOW;
	node->data=e;
	node->left=NULL;
	node->right=NULL;
	return OK;
}
Status InsertRight(pBiNode &root,ElemType e){
	if(root->right==NULL){
		if(e>root->data){
			pBiNode p;
			CreatTreeNode(p,e);
			root->right=p;
			return OK;
		}else{
			pBiNode p;
			CreatTreeNode(p,e);
			root->left=p;
			return OK;
		}

	}else{
		e>root->data? InsertRight(root->right,e):InsertLeft(root,e);
	}

}
Status InsertLeft(pBiNode &root,ElemType e){
	if(root->left==NULL){
		if(e>root->data){
			pBiNode p;
			CreatTreeNode(p,e);
			root->right=p;
			return OK;
		}else{
			pBiNode p;
			CreatTreeNode(p,e);
			root->left=p;
			return OK;
		}

	}else{
		e<=root->data?InsertLeft(root->left,e):InsertRight(root,e);
	}

}


Status InsertTree(pBiNode &root,ElemType e){
	if(BiTreeEmpty(root)){
		root->data=e;
		return true;
	}
	if(e>root->data){
		InsertRight(root,e);
	}else{
		InsertLeft(root,e);
	}
}


Status CreateBiTree(pBiNode &root,ElemType *a,int n){
	for (int i=0;i<n;i++)
	{
		InsertTree(root,a[i]);
	}
	return true;
}
 Status print(ElemType e ){
 	printf("%d ",e);
 	return true;
 }

Status PreOrderTraverse(pBiNode root,Status(*p)(int)){
	if(root){
		(*p)(root->data);
		PreOrderTraverse(root->left,p);
		PreOrderTraverse(root->right,p);
	}
	return OK;
}

Status MiddleOrderTraverse(pBiNode root,Status(*p)(int)){
	if(root){
		MiddleOrderTraverse(root->left,p);
		(*p)(root->data);
		MiddleOrderTraverse(root->right,p);
	}
	return OK;
}

Status AfterOrderTraverse(pBiNode root,Status(*p)(int)){
	if(root){
		AfterOrderTraverse(root->left,p);
		AfterOrderTraverse(root->right,p);
		(*p)(root->data);
	}
	return OK;
}

Status ClearBiTree(pBiNode &root){
	if(root){
		ClearBiTree(root->left);
		ClearBiTree(root->right);
		free(root);
		root==NULL;
	}
	return OK;
}
//队列中数据类型为树节点
typedef pBiNode Type;

//队列节点
typedef struct Node{
	Type data;
	struct Node* next;
}Node,*pNode;                

//队列
typedef struct LinkQueue{
	pNode head;
	pNode tail;
	int  length;
}LinkQueue,*pLinkQueue;

//初始化队列
Status InitQueue(pLinkQueue &Q){
	Q=(pLinkQueue)malloc(sizeof(LinkQueue));
	if(!Q) return OVERFLOW;
	pNode p=(pNode)malloc(sizeof(Node));
	if(!p) return OVERFLOW;
	p->next=NULL;
	Q->head=p;
	Q->tail=p;
	Q->length=0;
	return OK;
}

//队列长度
Status QueueLength(pLinkQueue Q){
	if(Q==NULL) return ERROR;
	return Q->length;
}
//队列是否为空
Status QueueEmpty(pLinkQueue Q){
	
	return QueueLength(Q)==0;
}

//从队尾插入数据
Status InsertQueue(pLinkQueue &Q,Type e){
	pNode q=Q->tail;
	pNode p=(pNode)malloc(sizeof(Node));
	p->data=e;
	p->next=NULL;
	Q->tail=p;
	q->next=Q->tail;
	Q->length++;
	return true;
}
//从队头删除数据
Status DeleteQueue(pLinkQueue &Q,Type &e){
	if(QueueLength(Q)<1) return ERROR;
	pNode p=Q->head;
	Q->head=p->next;
	e=Q->head->data;
	free(p);
	Q->length--;
	return true;
}
//层次遍历二叉树
void LevelOrder(pBiNode root){
	pLinkQueue Q;  
    InitQueue(Q);  
	InsertQueue(Q,root);
	while (!QueueEmpty(Q))
	{
		pBiNode e;
		DeleteQueue(Q,e);
		printf("%d ",e->data);
		if (e->left)
		{
			InsertQueue(Q,e->left);
		}
		if (e->right)
		{
			InsertQueue(Q,e->right);
		}

	}
}

int main(){
	ElemType a[40]={51,45,59,86,45,4,15,76,60,20,61,77,62,30,2,37,13,82,19,74,2,79,79,97,33,90,11,7,29,14,50,1,96,59,91,39,34,6,72,7};
	pBiNode root;
	InitBiTree(root);
	CreateBiTree(root,a,40);
	
	printf("前序：");
	PreOrderTraverse(root,print);
	
	printf("中序：");
	MiddleOrderTraverse(root,print);
	
	printf("后序：");
	AfterOrderTraverse(root,print);
	
	printf("层次遍历：");
	LevelOrder(root);
	
	printf("");
	ClearBiTree(root);
	
}
