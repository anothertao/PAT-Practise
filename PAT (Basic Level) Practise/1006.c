#include<stdio.h>
int main(void){
	int n,i;
	
	scanf("%d",&n);
	
	if(n>=100){
		for(i=1;i<=n/100;i++)
		printf("B");
	}
	n=n%100;
	if(n>=10){
		for(i=1;i<=n/10;i++)
		printf("S");
	}
	n=n%10;
	if(n>=0){
		for(i=1;i<=n;i++)
		printf("%d",i);
	}
	
	return 0;
}
