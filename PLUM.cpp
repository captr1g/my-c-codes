#include <iostream>
using namespace std;
#define ll long long int
int main() {
	ll testcases, pairs_of_arr;
	cin>>testcases;
	for(int k = 0; k<testcases; k++){
	    pairs_of_arr = 0;
	    int sizeof_arr;
	    cin>>sizeof_arr;
	    int arr[sizeof_arr];
	    for(int z = 0; z<sizeof_arr; z++){
	        ll input_of_arr ;
	        cin>>input_of_arr;
	        int arr[z] = {input_of_arr} ;
	    }
	    for(int i=0; i<sizeof_arr; i++){
	        for(int j = i+1; j<sizeof_arr; j++){
	        if(arr[i] == -1){
	            break;
	        }
	        else if(arr[j] == -1){
	            continue;
	        }
	        else if(arr[i] == arr[j]){
	            pairs_of_arr += 1;
	            arr[i] = -1;
	            arr[j] = -1;
	            break;
	            }
	        }
	    }
	    cout<<pairs_of_arr<<endl;
	}
	return 0;
}
