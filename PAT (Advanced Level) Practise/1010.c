#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void){
	char a[10],b[10],c[10],ch;
    char *pa, *pb;
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
/*		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);*/
        pa=b;pb=a;
		na=nb;
		nb=temp;
	}else{
        pa=a;pb=b;
	}
	for(i=0;i<na;i++){
		if(pa[i]>='0'&&pa[i]<='9')
		pa[i]=pa[i]-'0';
		else 
		pa[i]=pa[i]-'a'+10;
	}
	
	for(i=0;i<nb;i++){
		if(pb[i]>='0'&&pb[i]<='9')
		pb[i]=pb[i]-'0';
		else 
		pb[i]=pb[i]-'a'+10;
	}
		
	aa=0;
	for(i=0;i<na;i++){
		aa+=pa[i]*pow(radix,na-1-i);
	}
	
	if(aa==0){
		if(nb==1&&pb[0]==0)
		printf("2");
		else printf("Impossible");
	}else{
		radix=2;
		bb=0;
		for(i=0;i<nb;i++){
			bb+=pb[i]*pow(radix,nb-1-i);
		}
		while(bb<aa){
			radix++;
			bb=0;
			for(i=0;i<nb;i++){
				bb+=pb[i]*pow(radix,nb-1-i);
			}
		
			
		}
		if(bb==aa)
		printf("%d",radix);
		else printf("Impossible");
	}
	

	
	
	return 0;
}
