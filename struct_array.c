#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


//void create_lnode(struct lnode node[10],int i);

struct lnode
{
	//int *next;
	struct lnode *next;		//ָ������Ͳ�����int�͵ģ���Ϊ node[i].next = &node[i+1] Ҫ�����ͱ���һ��; 
	int data;
 };
 
 struct lnode node[10];		//�ṹ��Ŀռ��С�Ѿ���������СΪ10*sizeof(lnode)������Ҫ��̬����ռ��� 
 
 //ֻ�ýṹ�������ʾ 
struct lnode * create_lnode(struct lnode *node,int *a)  //node������,��Ҫ����ַҪ��*node������&node����ΪC����û��C++���ô���ַ 
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
