#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
#define inf=1e9
using ll = long long;
const int maxn=10000;
int n,m;
vector<pair<int,int>> adj[maxn];

void disjktra(int s){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y,w; cin>>x>>y>>w;
        adj[x].push({y,w});
        // y w 
    }
    //mang luu khoang cach
    vector<ll> d(n+1,inf);
    d[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0,s});
    while(!q.empty()){
        pair<int,int> top=q.top(); q.pop();
    }
}

int main(){
    return 0;
}