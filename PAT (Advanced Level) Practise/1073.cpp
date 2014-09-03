#include<bits/stdc++.h>
using namespace std;
#define echo(x) cout<<#x<<" = "<<x<<endl;
int main(void){
    char s[10200];
    cin>>s;
    int flag;
    if(s[0]=='+')flag=0;else flag=1;
    int t=1;
    char a[10200];
    int pa=0;
    while(s[t]!='E'){
        if(s[t]!='.'){
            a[pa++]=s[t];
        }
        t++;
    }
    a[pa]='\0';

    int r=0;
    int di;
    t++;
    if(s[t]=='+')di=0;else di=1;
    t++;
    while(s[t]!='\0'){
        r*=10;
        r+=s[t]-'0';
        t++;
    }
    
 /*   echo(flag)
    echo(a)
    echo(di)
    echo(r)
   */ if(r==0){
        if(flag==1)cout<<"-"<<a[0]<<".";
        int p=1;
        while(a[p]!='\0'){
            cout<<a[p];
            p++;
        }
        cout<<endl;
        return 0;
    }
    if(di==1){
        if(flag==1)cout<<"-";
        cout<<"0.";
        for(int i=0;i<r-1;i++)cout<<"0";
        cout<<a<<endl;
    }else{
        if(flag==1)cout<<"-";
        if(strlen(a)-1<=r){
            cout<<a;
            for(int i=0;i<r-strlen(a)+1;i++)cout<<"0";
            cout<<endl;
        }else{
            cout<<a[0];
            int i;
            for(i=1;i<=r;i++){
                cout<<a[i];
            }
            cout<<".";
            while(a[i]!='\0'){
                cout<<a[i];
                i++;
            }
            cout<<endl;
        }
    }
  
    return 0;
}
