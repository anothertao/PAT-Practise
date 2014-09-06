#include<bits/stdc++.h>
using namespace std;

class cake{
public:
    double weight;
    double price;
    double sp;    
} a[10005];
bool mf(const cake& a,const cake&b){
    return a.sp>b.sp;
}
int main(void){
    //double a[1005][4];
    int n;
    double m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i].weight;
    }
    for(int i=0;i<n;i++){
        cin>>a[i].price;
        a[i].sp=1.0*a[i].price/a[i].weight;
    }
    sort(a,a+n,mf);
    //cout<<a[0].sp<<endl;cout<<a[1].sp<<endl;cout<<a[2].sp<<endl;
    int p=0;
    double v=0;
    while(p!=n&&m>a[p].weight-1e-6){
        m-=a[p].weight;
        v+=a[p].price;
        p++;
    }
    if(p!=n){
        v+=a[p].sp*m;
    }
    printf("%.2lf",v);
    
    return 0;
}
