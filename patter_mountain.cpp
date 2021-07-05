#include<iostream>
using namespace std;
#define ll long long int
int main() {
	int number, space;
	cin>>number;
	space = number;
	// cout<<space<<"space kitna h";
	for(int row = 1; row<=number; row++){
		for(int coloum = 1; coloum <= row; coloum++){
			cout<<coloum<<"    ";
		}
		for(int coloum = 1; coloum <= space; coloum++){
			cout<<"    ";
		}
		space -= 2;
		if (row == number){
			for(int coloum = row-1; coloum >= 1; coloum--){
			cout<< coloum <<"    ";
			}
		}
		else{
			for(int coloum = row; coloum >= 1; coloum--){
				cout<<"    "<< coloum;
			}
		}
		cout<<"\n";
	}
	return 0;
}