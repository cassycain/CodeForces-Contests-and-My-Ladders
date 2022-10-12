
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
    
    vector<long long>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    vector<bool>memo(n+1, false);
    memo[n] = true;
    
    for(int i=n-1;i>-1;i--){
        if(memo[i+1]){
            int prev = i - arr[i];
            if(prev >= 0)
                memo[prev] = true;
        }
        
        if(!memo[i]){
            long long next = (long long)i + arr[i] + (long long)+1;
            if(next <= n && memo[next]){
                memo[i] = true;
            }
        }
        // if(memo[i])
            // cout<<i<<" ";
    }
    
    if(memo[0])
        cout<<"YES\n";
    else
        cout<<"NO\n";
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
