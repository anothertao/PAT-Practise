#include<stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d %d %d",&a,&c,&d);
	
	
	printf("#");
	b=a/13;
	{
		if(b>=0&&b<=9)
		printf("%d",b);
		else if(b==10)
		printf("A");
		else if(b==11)
		printf("B");
		else if(b==12)
		printf("C");		
	}

	
	b=a%13;
	
	{
		if(b>=0&&b<=9)
		printf("%d",b);
		else if(b==10)
		printf("A");
		else if(b==11)
		printf("B");
		else if(b==12)
		printf("C");		
	}
	
	
	
	
	
		b=c/13;
	{
		if(b>=0&&b<=9)
		printf("%d",b);
		else if(b==10)
		printf("A");
		else if(b==11)
		printf("B");
		else if(b==12)
		printf("C");		
	}

	
	b=c%13;
	
	{
		if(b>=0&&b<=9)
		printf("%d",b);
		else if(b==10)
		printf("A");
		else if(b==11)
		printf("B");
		else if(b==12)
		printf("C");		
	}
	
	
	
	
	
		b=d/13;
	{
		if(b>=0&&b<=9)
		printf("%d",b);
		else if(b==10)
		printf("A");
		else if(b==11)
		printf("B");
		else if(b==12)
		printf("C");		
	}

	
	b=d%13;
	
	{
		if(b>=0&&b<=9)
		printf("%d",b);
		else if(b==10)
		printf("A");
		else if(b==11)
		printf("B");
		else if(b==12)
		printf("C");		
	}
	return 0;
}
