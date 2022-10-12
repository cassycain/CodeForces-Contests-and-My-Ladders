
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<climits>
#include<unordered_map>

using namespace std;

unordered_map<char, int>S;

void solve(){
    
    string a, b;
    cin>>a>>b;
    
    int as = S[a.back()];
    int bs = S[b.back()];
    
    if(as == bs){
        as = a.size();
        bs = b.size();
        
        if(a.back() == 'S')
            swap(as, bs);
    }
    
    if(as < bs)
        cout<<"<\n";
    else if(as > bs)
        cout<<">\n";
    else
        cout<<"=\n";

    
    
}

void init(){
    S['S'] = 0;
    S['M'] = 1;
    S['L'] = 2;
}

int main()
{
    init();
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
