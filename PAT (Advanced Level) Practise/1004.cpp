#include<bits/stdc++.h>
#define echo(x) cout<<#x<"="<<x<<endl;
using namespace std;
int main(void){
    int a[105]={},b[105][105];
    int n,m;
    int f[105]={};
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x]=y;
        for(int j=0;j<y;j++){
            cin>>b[x][j];
            f[b[x][j]]=1;
        }
            
    }
    int head;
    for(int i=1;i<=n;i++){
        if(!f[i])head=i;
    }
    queue<int> q[105];
    q[0].push(head);
    
    int t=0;
    while(!q[t].empty()){
        int ans=0;
        while(!q[t].empty()){
            int id=q[t].front();
            if(a[id]==0)ans++;
            else{
                for(int i=0;i<a[id];i++){
                    q[t+1].push(b[id][i]);
                }                
            }

            q[t].pop();         
        }
        if(t)cout<<" ";
        cout<<ans;

        
        t++;
    }
    
    return 0;
}
