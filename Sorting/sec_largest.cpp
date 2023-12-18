#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5]={1,3,2,4,5};
	int largest= arr[0];
	int sec_largest = INT_MIN;
	for(int i=0; i<5; i++){
		if(arr[i]>largest  ){
			sec_largest=largest;
			largest= arr[i];
			
		}
		
	}
	cout<<sec_largest;
	
}
