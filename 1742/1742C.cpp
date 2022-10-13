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
    
    vector<string>arr(8);
    for(int i=0;i<8;i++)
        cin>>arr[i];
    bool f = false;
    for(int i=0;i<8;i++){
        int c = 0;
        for(int j=0;j<8;j++){
            if(arr[i][j] == 'R'){
                c++;
            }
        }
        if(c == 8){
            f = true;
            break;
        }
    }

    if(f)
        cout<<"R\n";
    else
        cout<<"B\n";

}




int main(){
    // init();
    int t; cin>>t;
    while(t--){
        solve();
    }
}