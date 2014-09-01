#include<bits/stdc++.h>

#define echo(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int a[505];
int m[505][505]={};
int n,mm,c1,c2;
int vis[505]={};
int sum=0;
int mmin=-1;
int cnt=0;
int jiao;
    
void dfs(int t){
    vis[t]=1;
    for(int i=0;i<n;i++){
        if(m[t][i]==-1)continue;
        if(vis[i]==1)continue;
        sum+=m[t][i];
        if(i==c2){
            vis[i]=1;
            int b=0;
            for(int s=0;s<n;s++){
                if(vis[s])b+=a[s];
            }
            vis[i]=0;
                        
            if(mmin==-1||sum<mmin){
                cnt=1;
                mmin=sum;
                jiao=b;

            }else if(sum==mmin){
                cnt++;
                if(jiao<b)jiao=b;    
            
            }
        }else{
            dfs(i);
        }
        sum-=m[t][i];
    }
    vis[t]=0;
}
int main(void){

    cin>>n>>mm>>c1>>c2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=-1;
        }
    }
    for(int i=0;i<mm;i++){
        int x,y,z;
        cin>>x>>y>>z;
        m[x][y]=z;
        m[y][x]=z;
    }
    if(c1==c2){
        cout<<"1 "<<a[c1]<<endl;
        return 0;
    }
    dfs(c1);
    cout<<cnt<<" "<<jiao<<"\n";
    return 0;
}
