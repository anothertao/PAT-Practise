#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void){
	char a[10],b[10],c[10],ch;
	int na,nb,temp,tag,radix,i;
	long aa,bb;
	
	ch=getchar();
	na=0;
	while(ch!=' '){
		a[na]=ch;
		na++;
		ch=getchar();
	}
	
	ch=getchar();
	nb=0;
	while(ch!=' '){
		b[nb]=ch;
		nb++;
		ch=getchar();
	}
	scanf("%d",&tag);
	scanf("%d",&radix);
	
	if(tag==2){
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
		temp=na;
		na=nb;
		nb=temp;
	}
	
	for(i=0;i<na;i++){
		if(a[i]>='0'&&a[i]<='9')
		a[i]=a[i]-'0';
		else 
		a[i]=a[i]-'a'+10;
	}
	
	for(i=0;i<nb;i++){
		if(b[i]>='0'&&b[i]<='9')
		b[i]=b[i]-'0';
		else 
		b[i]=b[i]-'a'+10;
	}
		
	aa=0;
	for(i=0;i<na;i++){
		aa+=a[i]*pow(radix,na-1-i);
	}
	
	if(aa==0){
		if(nb==1&&b[0]==0)
		printf("2");
		else printf("Impossible");
	}else{
		radix=2;
		bb=0;
		for(i=0;i<nb;i++){
			bb+=b[i]*pow(radix,nb-1-i);
		}
		while(bb<aa){
			radix++;
			bb=0;
			for(i=0;i<nb;i++){
				bb+=b[i]*pow(radix,nb-1-i);
			}
		
			
		}
		if(bb==aa)
		printf("%d",radix);
		else printf("Impossible");
	}
	

	
	
	return 0;
}
