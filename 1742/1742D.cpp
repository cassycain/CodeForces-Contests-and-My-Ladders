#include<vector>
#include<string>
#include<unordered_map>
#include<map>
#include<climits>
#include<algorithm>
#include<utility>
#include<iostream>

using namespace std;

vector<vector<int>>factors(1001);
vector<int>p;
unordered_map<int,int>pid;

void init(){
    for(int i=2;i<=1000;i++){
        if(factors[i].size() == 0){
            pid[i] = p.size();
            p.push_back(i);
            factors[i].push_back(i);
            for(int j=i;j<=1000;j+=i){
                factors[j].push_back(i);
            }
        }
    }
}

int gcd(int a, int b){
    if(a == 0) return b;
    else return gcd(b%a, a);
}

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int m = p.size();
    vector<vector<int>>memo(n, vector<int>(m, true));
    for(int i=0;i<n;i++){
        for(int pf:factors[a[i]]){
            
        }
    }

}




int main(){
    init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}