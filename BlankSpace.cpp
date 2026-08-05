#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int maxlen = 0;
        int current_len = 0; 

        for(int i = 0; i < n; i++){
            if(a[i] == 0) {
                current_len++; 
            } 
            else {
                current_len = 0; 
            }
            maxlen = max(maxlen, current_len);
        }
        cout << maxlen << endl;
    }
}