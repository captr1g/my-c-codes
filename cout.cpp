#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int 

int main(){
	ll testcase, citys, infected_city, live_in_this_city, jump;
	cin>>testcase;
	cin>>citys>>jump>>infected_city>>live_in_this_city;
	int arr[citys]= {0};
	int i= 0;
	while(i < citys){
	    arr[i]= i;
	}
    int x = 0;
	while(x <= 500){
        if(infected_city >= citys){
            infected_city = (infected_city - citys); 
        }
        if(infected_city == live_in_this_city){
            cout<<"YES"<<endl;
        }
        infected_city += (infected_city + jump )%citys;
        x++;
    }
    cout<<"NO"<<endl;
	return 0;
}
