#include<iostream>
using namespace std;
#define ll long long int 
void primt_seave(ll *p){
	for(ll i = 3; i <= 100000; i+=2){
		p[i] = 1;
	}
	for( ll i = 3; i<= 100000; i += 2){
		if(p[i] == 1){
			for(ll j = i*i; j<= 100000; j += i){
				p[j] = 0;
			} 
		}
	}
	p[2] = 1;
	p[1] = p[0] = 0;
}


int main() {
	// ll m = 10000000;
	ll p[100000] = {0};
	primt_seave(p);
	ll testcase;
	cin>>testcase;
	for(ll x = 0; x < testcase; x++){
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
	}
	return 0;
	
}