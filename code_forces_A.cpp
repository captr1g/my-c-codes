#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long int

int main(){
    int testin;
    cin>>testin;
    for(int z = 0; z < testin; z++){
        ll mosnster_a, mosnster_b, mosnster_c, count;
        cin>>mosnster_a>>mosnster_b>>mosnster_c;
        count = 1;
        bool flag = false;
        while(mosnster_c > 0 || mosnster_b > 0 || mosnster_a > 0){
            if (count%7 == 0){
                mosnster_a--;
                mosnster_b--;
                mosnster_c--;
                if(mosnster_c == 0 && mosnster_b == 0 && mosnster_a == 0){
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
                break;
            }
            if(mosnster_a >= mosnster_b && mosnster_a >= mosnster_c){
                    mosnster_a--;
            }
            else if(mosnster_c >= mosnster_b && mosnster_c <= mosnster_a){
                    mosnster_a--;
            }
            else if(mosnster_c <= mosnster_b && mosnster_c >= mosnster_a){
                    mosnster_b--;
            }
            else if(mosnster_a >= mosnster_b && mosnster_a <= mosnster_c){
                    mosnster_c--;
            }
            else if(mosnster_a <= mosnster_b && mosnster_a >= mosnster_c){
                    mosnster_b--;
            }
            else if(mosnster_b <= mosnster_a && mosnster_b >= mosnster_c){
                    mosnster_a--;
            }
            else if(mosnster_b >= mosnster_a && mosnster_b <= mosnster_c){
                    mosnster_c--;
            }
            else if(mosnster_b >= mosnster_a && mosnster_b >= mosnster_c){
                    mosnster_b--;
            }
            else{
                    mosnster_c--;
            }
            count++;
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}