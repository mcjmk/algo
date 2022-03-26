#include <bits/stdc++.h>
using namespace std;

constexpr int N=1e5;
int n;
vector<int>G[N];
int wielkoscpoddrzewa[N];

void dfswielkosci (int x, int parent){
    wielkoscpoddrzewa[x]=1;
    for (int i=0; i<G[x].size(); i++){
        if (G[x][i]!=parent){
            dfswielkosci(G[x][i], x);
            wielkoscpoddrzewa[x]+=wielkoscpoddrzewa[G[x][i]];
        }
    }
}
int znajdzcentroid(int x){
    for (int i=0; i<G[x].size(); i++){
        if (2*wielkoscpoddrzewa[G[x][i]]>n){
            wielkoscpoddrzewa[x]-=wielkoscpoddrzewa[G[x][i]];
            wielkoscpoddrzewa[G[x][i]]=n;
            return znajdzcentroid(G[x][i]);} }
    return x;
}

int main(){


    cin>>n;
    for (int i=0; i<n-1; i++){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a); }

    dfswielkosci(1, -1);



    int centroid=znajdzcentroid(1);


    cout<<centroid<<endl;
}


