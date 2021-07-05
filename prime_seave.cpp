#include<iostream>
using namespace std;
#define ll long long int 
void primt_seave(int *p){
	for(ll i = 3; i <= 1000000; i+=2){
		p[i] = 1;
	}
	for( ll i = 3; i<= 1000000; i += 2){
		if(p[i] == 1){
			for(ll j = i*i; j<= 1000000; j += i){
				p[j] = 0;
			} 
		}
	}
	p[2] = 1;
	p[1] = p[0] = 0;
}

int main(){
	// ll m = 10000000;
	int p[1000000] = {0};
	primt_seave(p);
	// for(int i = 0; i<= 100; i++){
	// 	if(p[i]== 1){
	// 		cout<< i<<endl;
	// 	}
	// }
	ll nth_prime_number, number, temp;
	cin>>nth_prime_number;
	number = 0;
	temp = 0;
	while(number != nth_prime_number){
		if(p[temp] == 1){
			number += 1;
		}
		if(number == nth_prime_number){
			cout<<temp<<endl;
			break;
		}
		temp += 1;
	}
	return 0;
}