#include <bits/stdc++.h>
using namespace std;

int seed = chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937 gen(seed);

int randint(int a, int b){
    return uniform_int_distribution<int>{a, b}(gen);
}

int main(){

    for (int i=0; i<30; i++)
        cout<<randint(31,1313)<<endl;

    cout<<endl<<endl;

    vector<int>permu={1,2,3,4,5,6,7,8,9};


    for (int i=0; i<10; i++){
        shuffle(permu.begin(), permu.end(),gen);
        for (auto g:permu)
            cout<<g<<" ";
        cout<<endl; }
}




