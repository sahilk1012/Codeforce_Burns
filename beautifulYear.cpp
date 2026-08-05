// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,rev=0;
//     cin>>n;
//     int w=n+1;
  
//     for(int i=n+1;i<9000;i++){  
//         vector<int>num;
//         while(w>0){
//             rev=w%10;
//             num.push_back(rev);
//             w=w/10;
//         }
//         int duplicate=0;
//         for(int i=0;i<num.size();i++){
//             for(int j=i+1;j<num.size();j++){
//                 if(num[i]==num[j]){
//                 duplicate=1;
//                 break;
//                 }
              
//             }
//         if(duplicate==1) break;
//         }
//         if(duplicate == 1){
//         cout<<i<<endl;   
//         }
//         w++;

//     }
   
// }


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
  

    for (int i = n + 1; i <= 9999; i++) {  
        vector<int> num;
        int w = i;  
        
        while (w > 0) {
            num.push_back(w % 10);
            w = w / 10;
        }
        
       
        bool is_beautiful = true;
        for (int j = 0; j < num.size(); j++) {
            for (int k = j + 1; k < num.size(); k++) {
                if (num[j] == num[k]) {
                    is_beautiful = false;  
                    break;
                }
            }
            if (!is_beautiful) break;
        }


        if (is_beautiful) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}




// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; 
//     int year = n + 1;

   
//     while (true) {
//         vector<int> digits;
//         int temp = year;

        
//         while (temp > 0) {
//             digits.push_back(temp % 10);
//             temp /= 10;
//         }

        
//         int duplicate = 0; 
//         for (int i = 0; i < digits.size(); i++) {
//             for (int j = i + 1; j < digits.size(); j++) {
//                 if (digits[i] == digits[j]) {
//                     duplicate = 1; 
//                     break;
//                 }
//             }
//             if (duplicate == 1) break;  
//         }

//         if (duplicate == 0) {
//             cout << year << endl;
//             break;
//         }

//         year++; 
//     }

//     return 0;
// }
