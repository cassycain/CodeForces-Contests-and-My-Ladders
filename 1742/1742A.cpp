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
    vector<int>arr(3);
    for(int i=0;i<3;i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    if(arr[0] + arr[1] == arr[2])
        cout<<"YES\n";
    else
        cout<<"NO\n";
}




int main(){
    // init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}