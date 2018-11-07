#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


//void create_lnode(struct lnode node[10],int i);

struct lnode
{
	//int *next;
	struct lnode *next;		//指针的类型不能是int型的，因为 node[i].next = &node[i+1] 要求类型保持一致; 
	int data;
 };
 
 struct lnode node[10];		//结构体的空间大小已经给定，大小为10*sizeof(lnode)，不需要动态申请空间了 
 
 //只用结构体数组表示 
struct lnode * create_lnode(struct lnode *node,int *a)  //node是数组,需要传地址要用*node，不用&node，因为C语言没有C++引用传地址 
{
	int i;
	
	for(i=0;i<10;i++)
	{	
		//struct lnode h;
		
		//h = (lnode *)malloc(sizeof(node));
		
		node[i].data = a[i];
		
		node[i].next = &node[i+1];
	}
		
	node[9].next = NULL;
}

void display(struct lnode *p)
{	
	int i = 0;
	
	for(;i<10;i++)
	{
		printf("%d\n",p++->data);
	}
}


int main() 
{
	struct lnode *p;
	
	int j = 0,a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//struct lnode node = (lnode*)malloc(sizeof(node));
	
	create_lnode(node,a);
	
	//*p = s1;
	
	for(j=0;j<10;j++)
		
		printf("%d\n",node[j].data);
	
	//display(p);
	
	printf("%d\n",sizeof(node));	
	
	return 0;
}
