#include<stdio.h>
int main(void){
	int n,m,i,j,p[100],temp;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	m=m%n;
	for(i=1;i<=m;i++){
		temp=p[n-1];
		for(j=n-1;j>0;j--){
			p[j]=p[j-1];
		}
		p[0]=temp;
	}
	printf("%d",p[0]);
	if(n>1){
		for(i=1;i<n;i++)
		printf(" %d",p[i]);
	}
	
	
	return 0;
} 
