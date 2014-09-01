#include<stdio.h>
int main(void){
	char ch;
	long sum=0;
	int a[1000];
	int i=0;
	ch=getchar();
	while(ch!='\n'){
		
		sum+=ch-'0';
		
		ch=getchar();
	};

	
	
	while(sum!=0){
		i++;
		a[i]=sum%10;
		sum/=10;
		
	}
	
	
	
	for(;i>=2;i--){
		if(a[i]==0)printf("ling");
		if(a[i]==1)printf("yi");
		if(a[i]==2)printf("er");
		if(a[i]==3)printf("san");
		if(a[i]==4)printf("si");
		if(a[i]==5)printf("wu");
		if(a[i]==6)printf("liu");
		if(a[i]==7)printf("qi");
		if(a[i]==8)printf("ba");
		if(a[i]==9)printf("jiu");
		
		printf(" ");
	}
	
		if(a[i]==0)printf("ling");
		if(a[i]==1)printf("yi");
		if(a[i]==2)printf("er");
		if(a[i]==3)printf("san");
		if(a[i]==4)printf("si");
		if(a[i]==5)printf("wu");
		if(a[i]==6)printf("liu");
		if(a[i]==7)printf("qi");
		if(a[i]==8)printf("ba");
		if(a[i]==9)printf("jiu");
	return 0;
}
