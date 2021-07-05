#include<iostream>
using namespace std;
#define ll long long int
int main() {
	ll testcases, c1, c2, c3, c4, n, m;
    ll sum_of_n, sum_of_m, minimum_n, minimum_m;
	cin>>testcases;
	for(int i = 0; i<testcases; i++){
		cin >> c1 >> c2 >> c3 >> c4;
		cin >> n >> m;
		sum_of_n = 0;
		sum_of_m = 0;
		for(int j = 0; j<n; j++){
			int input_of_n;
			cin >> input_of_n;
            minimum_n = min((c1*input_of_n), c2);
            sum_of_n += minimum_n;
		}
        sum_of_n = min(sum_of_n, c3);
		for(int j = 0; j<m; j++){
			int input_of_m;
			cin >> input_of_m;
            minimum_m = min((c1*input_of_m), c2);
            sum_of_m += minimum_m;
		}
        sum_of_m = min(sum_of_m, c3);
		ll total_cost = min((sum_of_n+sum_of_m), c4);
        cout<<total_cost<<endl;
	}
	return 0;
}