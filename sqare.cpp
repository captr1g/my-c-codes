#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
using namespace std;
#define fast_input_output ios::sync_with_stdio(false); cin.tie(0)
#define mod 1000000007
#define ll long long int

int main(){
    fast_input_output;
    int length_of_number = 100;
    for(int i = 1; i <= length_of_number; i++){
        cout<< i << " * " << i << " = " << (i*i)*i <<endl;
    }
    return 0;
}