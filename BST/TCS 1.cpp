#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	k = k%size;
	reverse(arr.begin(),arr.begin()+k);
	reverse(arr.begin()+k,arr.end());
	reverse(arr.begin(),arr.end());
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	
}
