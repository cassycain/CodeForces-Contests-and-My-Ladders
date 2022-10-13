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
    vector<int>x(10, 2);
    for(int i=0;i<n;i++){
        char op;
        int a;
        cin>>op>>a;
        for(int i=0;i<10;i++){
            if(op == '|' && (a>>i)%2 == 1){
                x[i] = 1;
            }
            else if(op == '&' && (a>>i)%2 == 0){
                x[i] = 0;
            }
            else if(op == '^' && (a>>i)%2 == 1){
                if(x[i] == -1)
                    x[i] = 2;
                else if(x[i] == 0)
                    x[i] = 1;
                else if(x[i] == 1)
                    x[i] = 0;
                else if(x[i] == 2)
                    x[i] = -1;
            }
        }
    }

    int a=1023, b=0, c=0;//and, or, xor

    for(int i=0;i<10;i++){
        if(x[i] == -1){
            c += (1<<i);
        }
        else if(x[i] == 0){
            a -= (1<<i);
        }
        else if(x[i] == 1){
            b += (1<<i);
        }
    }
    cout<<"3\n";
    cout<<"& "<<a<<"\n";
    cout<<"| "<<b<<"\n";
    cout<<"^ "<<c<<"\n";
}




int main(){
    // init();
    // int t; cin>>t;
    // while(t--)
    {
        solve();
    }
}