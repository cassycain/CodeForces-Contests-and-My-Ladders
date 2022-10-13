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

int gcd(int a, int b){
    return a ? gcd(b%a, a) : b;
}

void solve(){
    int n; cin>>n;
    unordered_map<int, int>pos;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        pos[x] = i;
    }

    int ans = -1;
    for(int i=1;i<=1000;i++){
        for(int j=i;j<=1000;j++){
            if(pos.find(i) != pos.end() && pos.find(j) != pos.end() && gcd(i, j) == 1){
                ans = max(ans, pos[i] + pos[j]);
            }
        }
    }

    cout<<ans<<"\n";
}




int main(){
    init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}