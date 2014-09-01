#include<stdio.h>
struct node{
	int element;
	struct node * left;
	struct node * right; 
}*T;
int post[30];
int in[30];

struct node * find(pl,pr,il,ir)
{
	int i;
	struct node *p;
	int nl,nr;
	if(pr-pl==0){
		p=malloc(sizeof(struct node));
		p->element=post[pr];
		p->left=p->right=NULL;
		return p;
	}
	
	for(i=il;i<=ir;i++){
		if(in[i]==post[pr])
			break;
	}
	nl=i-il;
	nr=ir-i;
	
	p=malloc(sizeof(struct node));
	p->element=post[pr];
	if(nl==0)
		p->left=NULL;
	else
		p->left=find(pl,pl+nl-1,il,i-1);

	if(nr==0)
		p->right=NULL;
	else
		p->right=find(pl+nl,pr-1,i+1,ir);	
		
	return p;	
	
}
int main(void){
	int i,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&post[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&in[i]);
	}
	T=find(0,n-1,0,n-1);
	printf("%d ",T->element);
	printf("%d ",T->left->element);
	printf("%d ",T->right->element);
	printf("%d ",T->left->left->element);
	printf("%d ",T->left->right->element);
	printf("%d ",T->right->left->element);
	printf("%d ",T->right->right->element);	
//	{
//		struct node * queue[50];
//		int left=0,right=0;
//		queue[0]=find(0,n-1,0,n-1);
//		while(right-left>=0){
//			
//			if(queue[left]->left)
//				queue[++right]=queue[left]->left;
//			if(queue[left]->right)
//				queue[++right]=queue[left]->right;	
//			printf("%d ",queue[left--]->element);		
//		}
//	}
	
	return 0;
} 
