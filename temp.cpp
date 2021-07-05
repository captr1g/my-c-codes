#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll testcase, final_power_of_chef, final_power_of_Rick, count_chef, count_rick;
	ll digit_chef, digit_rick;
	cin>>testcase;
	for(int z = 0; z < testcase; z++){
	    cin>>final_power_of_chef >> final_power_of_Rick;
	    count_chef = 0;
	    digit_chef = 0;
	    count_rick = 0;
		digit_rick = 0;
	    while(digit_chef < final_power_of_chef){
	        if(digit_chef + 9 <= final_power_of_chef){
	            digit_chef += 9;
	        }
	        else if(digit_chef + 8 <= final_power_of_chef){
	            digit_chef += 8;
	        }
	        else if(digit_chef + 7 <= final_power_of_chef){
	            digit_chef += 7;
	        }
	        else if(digit_chef + 6 <= final_power_of_chef){
	            digit_chef += 6;
	        }
	        else if(digit_chef + 5 <= final_power_of_chef){
	            digit_chef += 5;
	        }
	        else if(digit_chef + 4 <= final_power_of_chef){
	            digit_chef += 4;
	        }
	        else if(digit_chef + 3 <= final_power_of_chef){
	            digit_chef += 3;
	        }
	        else if(digit_chef + 2 <= final_power_of_chef){
	            digit_chef += 2;
	        }
	        else if(digit_chef + 1 <= final_power_of_chef){
	            digit_chef += 1;
	        }
	        count_chef += 1;
	    }
		while(digit_rick < final_power_of_Rick){
	        if(digit_rick + 9 <= final_power_of_Rick){
	            digit_rick += 9;
	        }
	        else if(digit_rick + 8 <= final_power_of_Rick){
	            digit_rick += 8;
	        }
	        else if(digit_rick + 7 <= final_power_of_Rick){
	            digit_rick += 7;
	        }
	        else if(digit_rick + 6 <= final_power_of_Rick){
	            digit_rick += 6;  
	        }
	        else if(digit_rick + 5 <= final_power_of_Rick){
	            digit_rick += 5;  
	        }
	        else if(digit_rick + 4 <= final_power_of_Rick){
	            digit_rick += 4;
	        }
	        else if(digit_rick + 3 <= final_power_of_Rick){
	            digit_rick += 3;
	        }
	        else if(digit_rick + 2 <= final_power_of_Rick){
	            digit_rick += 2;
	        }
	        else if(digit_rick + 1 <= final_power_of_Rick){
	            digit_rick += 1;
	        }
			count_rick += 1;
		}
		if(count_rick == count_chef){
			cout<<1<<" "<<count_rick<<endl;
		}
		else if (count_rick < count_chef){
			cout<<1<<" "<<count_rick<<endl;
		}
		else if (count_rick > count_chef) {
			cout<<0<<" "<<count_chef<<endl;
		}
		
	}
	return 0;
}
