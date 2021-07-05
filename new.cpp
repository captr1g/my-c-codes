#include<iostream>
#include<algorithm>
#include<cmath>
#include <string>
using namespace std;
#define ll long long int

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        string stong_language;
        int K, N, count_astrick;
        cin>>K>>N;
        getline(cin, stong_language);
        count_astrick = 0;
        bool flag = false;
        for(int i = 0; i<K; i++){
            if(int(stong_language[i] >= 97 && int(stong_language[i]) <= 122)){
                count_astrick = 0;
            }
            else if(int(stong_language[i] == 42)){
                count_astrick++;
                if(count_astrick == N){
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
            }
            else{
                cout<<"phat gya"<<endl;
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}

