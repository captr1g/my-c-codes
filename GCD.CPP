// C++ program to find GCD of two numbers
#include<iostream>
#include<algorithm>
#include<cmath>
#include <string>
using namespace std;
#define mod 1000000007
#define ll long long int
// Recursive function to return gcd of a and b
int gcd(int a, int b){
	// // Everything divides 0
	// if (a == 0)
	// return b;
	// if (b == 0)
	// return a;
	// // base case
	// if (a == b)
	// 	return a;
	// // a is greater
	// if (a > b)
	// 	return gcd(a-b, b);
	// return gcd(a, b-a);

	if (b == 0)
        return a;
    return gcd(b, a % b);
}
// Driver program to test above function
int main(){
	int a, b;
	cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b)<<" run again for other input ";
	return 0;
}
