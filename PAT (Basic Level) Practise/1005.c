#include<stdio.h>
int main(void){
	int a[100],b[100],k,i,j,temp,count;
	
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}


	
	for(i=0;i<k;i++){
		if(a[i]!=0)
		temp=a[i];
		else continue;
		
		while(temp!=1){
			if(temp%2==1){
				temp=(3*temp+1)/2;
				for(j=0;j<k;j++){
					if(a[j]==temp)
					a[j]=0;
				}
			}else{
				temp=temp/2;
				for(j=0;j<k;j++){
					if(a[j]==temp)
					a[j]=0;
				}
			}
		}
		
		
	}
	
	j=0;
	for(i=0;i<k;i++){
		if(a[i]!=0){
			b[j]=a[i];
			j++;
		}
	}
	
	count=j;
	
	for(i=1;i<count;i++){
		for(j=0;j<count-i;j++){
			if(b[j]<b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	
	printf("%d",b[0]);
	for(i=1;i<count;i++)
	printf(" %d",b[i]);
	
	return 0;
}
