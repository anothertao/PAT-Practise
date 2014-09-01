#include<stdio.h>
struct node{
	char id[7];
	char name[9];
	int grade;
};
int main(void){
	int n,c,i,j;
	struct node * p, *temp;
	struct node * list[100000];
	
	scanf("%d",&n);
	scanf("%d",&c);
	for(i=0;i<n;i++){
		p=malloc(sizeof(struct node));
		scanf("%s %s %d",p->id,p->name,&p->grade);
		list[i]=p;
	}
	
	if(c==1){
		for(i=1;i<n;i++){
			temp=list[i];
			for(j=i;j>0&&strcmp(list[j-1]->id,temp->id)>0;j--)
				list[j]=list[j-1];
			list[j]=temp;
		}
		
	}else if(c==2){
		for(i=1;i<n;i++){
			temp=list[i];
			for(j=i;j>0&&(strcmp(list[j-1]->name,temp->name)>0||strcmp(list[j-1]->name,temp->name)==0&&strcmp(list[j-1]->id,temp->id)>0);j--)
				list[j]=list[j-1];
			list[j]=temp;
		}		
	}else if(c==3){
		for(i=1;i<n;i++){
			temp=list[i];
			for(j=i;j>0&&(list[j-1]->grade>temp->grade||list[j-1]->grade==temp->grade&&strcmp(list[j-1]->id,temp->id)>0);j--)
				list[j]=list[j-1];
			list[j]=temp;
		}		
	}
	
	for(i=0;i<n;i++){
		printf("%s %s %d\n",list[i]->id,list[i]->name,list[i]->grade);		
	}

	return 0;
} 
