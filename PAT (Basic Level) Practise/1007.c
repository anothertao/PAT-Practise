#include<stdio.h>
int main(void){
	int count,n,i,j,p[100000],prime[100002];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0)
		prime[i]=0;
		else prime[i]=1;
	}
	prime[1]=0;
	prime[2]=1;
	for(i=3;i<=sqrt(n);i+=2){
		if(prime[i]){
			for(j=i+i;j<=n;j+=i)
			prime[j]=0;
		}
		
	}
	j=0;
	for(i=1;i<=n;i++){
		if(prime[i]){
			p[j]=i;
			j++;
			
		}
	}

	count=0;
	for(i=0;i<j;i++){
		if(p[i+1]-p[i]==2)
		count++;
	}
	printf("%d",count);
	
	return 0;
}
