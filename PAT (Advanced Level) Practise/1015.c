#include<stdio.h>
#include<math.h>
int prime(int x){
	int i;
	if(x==1)
	return 0;
	for(i=2;i<x;i++){
		if(x%i==0)
		return 0;
	}
	return 1;
}
int main(void){
	int n,d,x,y,a[20],i,j;
	
	scanf("%d",&n);
	x=n;
	while(n>0){
		scanf("%d",&d);
		
		
		i=0;
		while(x!=0){
			a[i]=x%d;
			x=x/d;
			i++;
		}
		j=0;
		y=0;
		while(i!=0){
			i--;
			y+=a[j]*pow(d,i);
			j++;
		}
		
		
		
		
		if(prime(n)&&prime(y))
		printf("Yes\n");
		else printf("No\n");
		
		
		
		
		scanf("%d",&n);
		x=n;
	}
	return 0;
}
