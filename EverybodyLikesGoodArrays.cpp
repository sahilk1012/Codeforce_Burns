#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int moves=0;
        for(int i = 1; i < n; i++) { 
            if (a[i] % 2 == a[i+1] % 2) {
                moves++;
            }
        }
        cout<<moves<<endl;
    }
}