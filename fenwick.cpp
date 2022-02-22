 #include <bits/stdc++.h>
 using namespace std;

 constexpr int N=1e3;


 int x, val;
 vector<int>a;
 vector<int>D(15);

 //int a[N],D[N];

 int pref (int x){
    if (x==0)
        return 0;
    return D[x]+pref(x-(x& (-x))); }

void upd (int x, int val){
    if (x>D.size()) return;
    D[x]+=val;
    upd(x+(x& (-x)), val); }

int n;
int main (){

    cin>>n;

    bool rodzaj;
    for (int i=1; i<=n; i++){
         cin>>rodzaj;
         if (rodzaj){
            cin>>x>>val;
            a.push_back(x);
            upd(x,val);}


         else{
            cin>>x;
            cout<<pref(x); }

    }


 }
