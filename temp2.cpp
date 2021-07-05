#include<iostream>
#include <cstring>
#include <math.h>
using namespace std;

void placethe_char(char *a, int i){
	// if (a[i] =='\0' or a[i+1] == '\0'){
	if(i == strlen(a)){
		return;
	}
	if (a[i] == a[i+1]){
		// int j = i+1;
		// while(j != '\0'){
		// 	j++;
		// }
		// while( j >= i+1){
		// 	a[j+1] = a[j];
		// 	j--;
		// }
		// a[i] = 'l';
		// a[i+1] = '*';
		// a[i+2] = 'l';
		// placethe_char(a, i+3);
		for(int x=strlen(a);x>i;x--){
			a[x]=a[x-1];
		}
		a[i+1]='*';
	}
	else{
		placethe_char(a, i+1);
	}
	return;
}

int main() {
	char a[10000];
	cin>>a;
	placethe_char(a, 0);
	cout<<a<<endl;

	return 0;
}