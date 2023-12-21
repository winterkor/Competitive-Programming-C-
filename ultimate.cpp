#include<bits/stdc++.h>
using namespace std;
char mp[1010][1010];
int dp[1010][1010];
int main(){
    cin.tie(0),ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mp[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(mp[i][j]=='.'){
                dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                ans=max(ans,dp[i][j]);
            }
        }
    }
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout<<mp[i][j];
//        }cout<<"\n";
//    }
    cout<<ans;
return 0;
}
