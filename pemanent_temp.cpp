#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long int

int main() {
	int testcase;
	cin>>testcase;
	for(int z = 0; z < testcase; z++){
	    int john_votes_pack, jack_votes_pack, jack_votes_total, john_votes_total, swaps_total;
        swaps_total = 0;
	    john_votes_total = 0;
	    jack_votes_total = 0;
	    cin>>john_votes_pack>>jack_votes_pack;
	    int john_votes_pack_arr[john_votes_pack] = {0};
	    int jack_votes_pack_arr[jack_votes_pack]= {0};
	    for(int x = 0; x < john_votes_pack; x++){
	        cin>>john_votes_pack_arr[x];
	        john_votes_total += john_votes_pack_arr[x];
	    }
	    for(int x = 0; x < jack_votes_pack; x++){
	        cin>>jack_votes_pack_arr[x];
	        jack_votes_total += jack_votes_pack_arr[x];
	    }
	    if(john_votes_total > jack_votes_total){
	        cout<< 0 <<endl;
	    }
	    else{
            sort(john_votes_pack_arr, john_votes_pack_arr + john_votes_pack);
	        sort(jack_votes_pack_arr, jack_votes_pack_arr + jack_votes_pack);
            reverse(jack_votes_pack_arr, jack_votes_pack_arr + jack_votes_pack);
            int count, j;
            count = 0;
            j = 0;
            for(int i = 0; i < john_votes_pack; i++){
                if(i < jack_votes_pack){
                    john_votes_total = john_votes_total - john_votes_pack_arr[i] + jack_votes_pack_arr[j];
                    jack_votes_total = jack_votes_total - jack_votes_pack_arr[j] + john_votes_pack_arr[i];
                    swap(john_votes_pack_arr[i], jack_votes_pack_arr[j]);
                    count++;
                    j++;
                    if(john_votes_total > jack_votes_total){
                        break;
                    }
                }
            }
            if(john_votes_total > jack_votes_total){
                cout<<swaps_total<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
	    }
	}
	return 0;
}
