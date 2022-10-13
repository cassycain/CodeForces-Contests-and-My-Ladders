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
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    bool dup = false;
    for(int i=1;i<n && !dup;i++){
        if(arr[i] == arr[i-1])
            dup = true;
    }
    if(dup)
        cout<<"NO\n";
    else 
        cout<<"YES\n";
}




int main(){
    // init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}