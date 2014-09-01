#include<stdio.h>
int main(void){
	char p[80][80],ch;
	int i,j;
	
	ch=getchar();
	i=0;j=0;
	while(ch!='\n'){
		j=0;
		while(ch!='\n'&&ch!=' '){
			p[i][j]=ch;
			ch=getchar();
			j++;
		}
		if(ch==' '){
			p[i][j]='\0';
			i++;
			ch=getchar();
		}
	}
	p[i][j]='\0';
	
	printf("%s",p[i]);
	if(i>0){
		for(j=i-1;j>=0;j--){
			printf(" %s",p[j]);
		}
	}
	
	
	return 0;
}
