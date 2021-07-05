#include<iostream>
#include<algorithm>
#include<cmath>
#include <string>
using namespace std;
#define mod 1000000007
#define ll long long int


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll N = 2e6+5;
    cout<<N<<endl;
    int phi[N],ans[N];
    for(int i= 0; i<N; i++){
        phi[i] = i;
        ans[i] = 0;
    }
    for(int p = 2; p < N; p++){
        if(phi[p] == p){
            phi[p] = p-1;
            for(int i = 2*p; i<N; i+= p){
                phi[i] = (phi[i]/p) * (p-1);
            } 
        }
    }
    for(int i= 1; i<N; i++){
        ans[i]= i-1;
        for(int j= 2*i; i<N; j+=i){
            ans[j] += i*((1+phi[j/i])/2);
        }
    }

    int testcase;
    cin>>testcase;
    while(testcase--){
        ll k_integer;
        cin>> k_integer;
        cout<< ans[4 * k_integer + 1] <<"\n";
    }
    return 0;
}