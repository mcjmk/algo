#include <bits/stdc++.h>
using namespace std;

vector<int>a, fenwick;  // a - x1, x2, ..., xn

int pref (int x){
    if (x==0)
        return 0;
    return fenwick[x]+pref(x-(x& (-x)));}

void upd (int x, int val){
    if (x>fenwick.size()) return;
    fenwick[x]+=val;
    upd(x+(x& (-x)), val);}

int main (){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);


    int n,q;
    cin>>n>>q;

    a.resize(n+1);
    D.resize(n+1);

    while (t--){
        bool rodzaj;
        int x, val;
        cin>>rodzaj;

        if (rodzaj){
            cin>>x>>val;
            a.push_back(x);
            upd(x,val);}
        else{
            cin>>x;
            cout<<pref(x);
        }
    }


}
