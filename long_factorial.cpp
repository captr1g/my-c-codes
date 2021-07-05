#include<iostream>
using namespace std;
#define ll unsigned long long 
#define MAX 1000000


int multiply(int number, int multipler[], int size_ans){
	int carry  = 0;
	for(int x = 0; x < size_ans; x++){
		int product = multipler[x] * number + carry;
		multipler[x] = product % 10;
		carry = product / 10;
	}
	while (carry) { 
        multipler[size_ans] = carry % 10; 
        carry /= 10; 
        size_ans++; 
    } 
	return size_ans;
}


void factorial(int number_given){
	int ans[MAX];
	ans[0] = 1;
	int ans_size = 1;
	for(int i = 2; i <= number_given; i++){
		ans_size = multiply(i, ans, ans_size);
	}
	for (int i = ans_size-1; i>=0; i--){ 
        cout << ans[i];
    }
}


int main(){
	ll i, main_number;
	cin>>main_number;
	factorial(main_number);
	return 0;
}