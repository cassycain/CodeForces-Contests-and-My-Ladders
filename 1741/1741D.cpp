
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<climits>
#include<unordered_map>

using namespace std;

// unordered_map<char, int>S;


int get(vector<int>&arr, int lb, int ub, int i, int j){
    // cout<<lb<<":"<<ub<<":"<<i<<":"<<j<<" - ";
    
    if(i == j){
        // cout<<"0\n";
        return 0;
    }
    
    int k = (i+j+1)/2;
    int mb = lb + (ub-lb+1)/2;
    int llb, lub, rlb, rub;
    
    if(lb <= arr[i] && arr[i] < mb){
        llb = lb;
        lub = mb-1;
        
        rlb = mb;
        rub = ub;
    }
    else{
        rlb = lb;
        rub = mb-1;
        
        llb = mb;
        lub = ub;
    }
    
    
    for(int p=i;p<k;p++){
        if(!(llb <= arr[p] && arr[p] <= lub))
            return -1;
    }
    
    int left = get(arr, llb, lub, i, k-1);
    int right = get(arr, rlb, rub, k, j);
    int extra = (llb == mb);
    
    if(left == -1 || right == -1){
        // cout<<-1<<"\n";
        return -1;
    }
    else{
        // cout<<left+right+extra<<"\n";
        return left+right+extra;
    }
        
    
}

void solve(){
    int n; cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<get(arr, 1, n, 0, n-1)<<"\n";
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
