
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<climits>
#include<unordered_map>

using namespace std;

// unordered_map<char, int>S;

void solve(){
    int n; cin>>n;
    if(n == 3){
        cout<<"-1\n";
        return;
    }
    
    vector<int>ans(n);
    
    
    
    if(n%2){
        for(int i=0;i<n/2;i++){
            ans[i] = n-i;
        }
        for(int i=n/2;i<n;i++){
            ans[i] = i-n/2+1;
        }
    }
    else{
        for(int i=0;i<n;i++){
            ans[i] = n-i;
        }
    }
    
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    
}

void init(){
    
}

int main()
{
    // init();
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
