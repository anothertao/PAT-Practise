#include<stdio.h>
int main(void){
	long a=0,b=0,c;
	int p[10],i,j;
	
/*	int fa=1,fb=1;
	char ch;
	ch=getchar();
	while(ch!=' '){
		if(ch=='-'){
			fa=-1;
		}else if(ch!=','){
			if(a==0)
			a=ch-'0';
			else
			a=a*10+ch-'0';
		}
		ch=getchar();
	}
	ch=getchar();
	while(ch!='\n'){
		if(ch=='-'){
			fb=-1;
		}else if(ch!=','){
			if(b==0)
			b=ch-'0';
			else
			b=b*10+ch-'0';
		}
		ch=getchar();
	}
	
	c=a*fa+b*fb;
*/	
	scanf("%ld",&a);
	scanf("%ld",&b);
	c=a+b;
	if(c==0){
		printf("0");
		return 0;
	}
	if(c<0){
		printf("-");
		c=(-c);
	}
	i=0;
	while(c!=0){
		p[i]=c%10;
		c/=10;
		i++;
	}
	
	for(j=i-1;j>=0;j--){
		printf("%d",p[j]);
		if(j%3==0&&j!=0)
		printf(",");
	}
	
	return 0;
}
