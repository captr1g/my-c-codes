#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    ll arr_length, ans;
	    cin>>arr_length;
	    int arr_of_number[arr_length];
	    for(int z = 0; z < arr_length; z++){
	        cin>>arr_of_number[z];
	    }
	    ans = 0;
	    if(arr_length == 3){
	        ans = (abs(arr_of_number[0] - arr_of_number[1]) + abs(arr_of_number[1] - arr_of_number[2]) + abs(arr_of_number[2] - arr_of_number[0])); 
	    }
	    else{
	        for(int i = 0; i<= arr_length-2; i++){
	            ll temp =  (abs(arr_of_number[i] - arr_of_number[i+1]) + abs(arr_of_number[i+1] - arr_of_number[i+2]) + abs(arr_of_number[i+2] - arr_of_number[i]));
	            if(temp >= ans){
	                ans = temp;
                }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
