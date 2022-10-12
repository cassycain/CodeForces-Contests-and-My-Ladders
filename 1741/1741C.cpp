
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
    
    vector<long long>arr(n), pre(n);
    long long cur = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cur += arr[i];
        pre[i] = cur;
    }
    
    int ans = n;
    for(int i=0;i<n;i++){
        long long mul = 1;
        int cur_ans = i;
        int prev = -1;
        
        while(prev != n-1){
            long long t = pre[i] * mul;
            
            auto it = lower_bound(pre.begin(), pre.end(), t);
            
            if(it == pre.end() || *it != t){
                cur_ans = -1;
                break;
            }
            int j = it - pre.begin();
            // cout<<j<<":"<<prev<<"\n";
            cur_ans = max(cur_ans, j-prev);
            prev = j;
            
            mul++;
        }
        if(cur_ans != -1){
            ans = min(ans, cur_ans);
        }
        // cout<<ans<<"\n";
    }
    
    cout<<ans<<"\n";
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
