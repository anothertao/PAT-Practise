#include<stdio.h>
int main(void){
	char ch;
	int n=0,p[1000],i;
	ch=getchar();
	while(ch!='\n'){
		n+=ch-'0';
		ch=getchar();
	}
//	printf("%d",n);
	if(n==0)
	printf("zero");
	else{
		i=0;
		while(n!=0){
			p[i]=n%10;
			n/=10;
			i++;
		}
		i--;
		if(p[i]==0)
		printf("zero");
		else if(p[i]==1)
		printf("one");
		else if(p[i]==2)
		printf("two");
		else if(p[i]==3)
		printf("three");
		else if(p[i]==4)
		printf("four");
		else if(p[i]==5)
		printf("five");
		else if(p[i]==6)
		printf("six");
		else if(p[i]==7)
		printf("seven");
		else if(p[i]==8)
		printf("eight");
		else if(p[i]==9)
		printf("nine");
		
		if(i>0){
			i--;
			for(;i>=0;i--){
				printf(" ");
				
						if(p[i]==0)
		printf("zero");
		else if(p[i]==1)
		printf("one");
		else if(p[i]==2)
		printf("two");
		else if(p[i]==3)
		printf("three");
		else if(p[i]==4)
		printf("four");
		else if(p[i]==5)
		printf("five");
		else if(p[i]==6)
		printf("six");
		else if(p[i]==7)
		printf("seven");
		else if(p[i]==8)
		printf("eight");
		else if(p[i]==9)
		printf("nine");
		
			}
		}
	}

	return 0;
}
