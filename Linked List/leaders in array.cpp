#include<iostream>
using namespace std;
int main(){
	int arr[ ]= {7,10,4,6,5,3,2};
	int n =7;
	//output should be 10 6 5 3 2
	//optimized appraoc
	
	cout<<arr[n-1]<<" ";
	int leader = arr[n-1];
	for(int i=n-2 ; i>=0; i--){
		if(arr[i]>=leader){
			//make i as a leader
			leader = arr[i];
			cout<<leader<<" ";
		}
		
	}
	
	
	
	
	
	
	
//	
//	//naive
//	for(int i =0 ; i<7; i++){
//		bool flag = false;
//		for(int j= i+1; j<7; j++){
//			if(arr[i]<=arr[j]){
//				flag = true;
//				break;
//			}
//		}
//		if(flag==false){
//			cout<<arr[i]<<" ";
//		}
//	}
	return 0;
}
