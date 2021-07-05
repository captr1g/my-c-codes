#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long int

int main() {
    int testcase;
	cin>>testcase;
	for(int z =0; z < testcase; z++){
	    int number_of_boxs, height_of_wall,ans_sum, mike_tower, mike_tower_sum, total_height, tracy_tower_sum, tracy_tower, ans;
	    ans_sum = 0; 
	    cin>>number_of_boxs>>height_of_wall;
	    int arr_of_boxs[number_of_boxs];
	    for(int z = 0; z < number_of_boxs; z++){
	        cin>>arr_of_boxs[z];
	    }
	    sort(arr_of_boxs, arr_of_boxs+number_of_boxs);
	    mike_tower = 0;
	    mike_tower_sum = 0;
	    tracy_tower_sum = 0;
	    tracy_tower = 0;
	    total_height = 0;
	    for(int i = number_of_boxs-1; i>=0; i--){
	        if(total_height <= height_of_wall*2){
	            total_height += arr_of_boxs[i];
	            if(mike_tower_sum <= height_of_wall and mike_tower_sum <= tracy_tower_sum){
    	            mike_tower_sum += arr_of_boxs[i];
    	            ans_sum++;
    	        }
    	        else{
    	            if(tracy_tower_sum <= height_of_wall and mike_tower_sum >= tracy_tower_sum){
                        tracy_tower_sum += arr_of_boxs[i];
                        ans_sum++;
    	            }
    	        }
	        }
	    }
	    if(total_height < height_of_wall*2 || number_of_boxs == 1){
	       cout << -1 <<endl;
	    }
	    else{
	        ans = 0;
	        for(int i = number_of_boxs-1; i>=0; i--){
    	        if(mike_tower <= height_of_wall and mike_tower <= tracy_tower){
    	            mike_tower += arr_of_boxs[i];
    	            ans++;
    	        }
    	        else{
    	            if(tracy_tower <= height_of_wall and mike_tower >= tracy_tower){
                        tracy_tower += arr_of_boxs[i];
                        ans++;
    	            }
    	        }
	        }
	        if(ans > ans_sum){
	            if(mike_tower_sum >= height_of_wall && tracy_tower_sum >= height_of_wall){
	                cout<<ans_sum<<endl;
	            }
	            else if(mike_tower >= height_of_wall && tracy_tower >= height_of_wall){
	                 cout<<ans<<endl;
	            }
	            else{
	                cout<<-1<<endl;
	            }
	        }
	        else{
	            if(mike_tower_sum >= height_of_wall && tracy_tower_sum >= height_of_wall){
	                cout<<ans_sum<<endl;
	            }
	            else{
	                if(mike_tower >= height_of_wall && tracy_tower >= height_of_wall){
	                 cout<<ans<<endl;
	                }
	            }
	        }
	    }
	}
    return 0;
}
