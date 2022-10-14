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

bool compare(vector<long long>&s, vector<long long>&t, long long sl, long long tl){
    for(int i=0;i<26;i++){
        for(int j=25;j>i;j--){
            if(s[i] > 0 && t[j] > 0){
                return true;
            }
        }
    }
    
    for(int i=0;i<26;i++){
        if(s[i] > 0 && t[i] > 0){
            if(s[i] < t[i] && s[i] == sl)
                return true;
        }
    }
    
    return false;
}

void solve(){
    int n; cin>>n;
    vector<long long>s(26, 0), t(26, 0);
    s[0] = 1;
    t[0] = 1;
    long long sl = 1, tl = 1;
    vector<string>ans;
    for(int i=0;i<n;i++){
        long long q, k;
        string x;
        cin>>q>>k>>x;
        for(char c:x){
            if(q == 1){
                s[c-'a'] += k;
            }
            else{
                t[c-'a'] += k;
            }
        }
        if(q == 1)
            sl += k*x.size();
        else
            tl += k*x.size();

        int j = 0;
        while(j < 26 && s[j] == t[j]){
            j++;
        }
        
        if(compare(s, t, sl, tl))
            ans.push_back("YES\n");
        else
            ans.push_back("NO\n");
    }

    for(string r:ans)
        cout<<r;
}

int main(){
    // init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}