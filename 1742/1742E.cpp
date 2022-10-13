#include<vector>
#include<string>
#include<unordered_map>
#include<map>
#include<climits>
#include<algorithm>
#include<utility>
#include<iostream>

using namespace std;

void init(){

}

void solve(){
    int n, q;
    cin>>n>>q;
    vector<long long>pm(n), ps(n);
    long long cur_max = 0, cur_h = 0;
    for(int i=0;i<n;i++){
        long long h; cin>>h;
        cur_max = max(cur_max, h);
        cur_h += h;

        pm[i] = cur_max;
        ps[i] = cur_h;
    }

    vector<long long>res;
    for(int i=0;i<q;i++){
        long long h; cin>>h;
        auto it = upper_bound(pm.begin(), pm.end(), h);
        
        if(it == pm.begin())
            res.push_back(0);
        else
            res.push_back(ps[it-pm.begin()-1]);
    }

    for(auto x:res)
        cout<<x<<" ";
    cout<<"\n";
}




int main(){
    // init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}