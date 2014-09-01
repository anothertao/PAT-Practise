#include<stdio.h>
int main(void){
	char a[1000][11];
	char b[1000][11];
	int c[1000];
	int i,n,temp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		getchar();
		scanf("%s",b[i]);
		getchar();
		scanf("%d",&c[i]);
		

		
	}
	
	temp=0;
	for(i=1;i<n;i++){
		if(c[temp]<c[i])
		temp=i;
	}
	printf("%s %s\n",a[temp],b[temp]); 
	
	temp=0;
	for(i=1;i<n;i++){
		if(c[temp]>c[i])
		temp=i;
	}
	printf("%s %s\n",a[temp],b[temp]); 
	
	return 0;
	
} 
