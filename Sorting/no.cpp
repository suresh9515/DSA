#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	
	
	int arr[10]={5,0,5,5,5,0,5,0,5,5};
	int count5 =0;
	int count0 =0;
    for(int i=0; i<10; i++){
    	if(arr[i]==5){
    		count5++;
		}
		if(arr[i]==0){
    		count0++;
		}
	}	
	
	int c5 = floor(count5/9)*9;
	for(int i=0; i<=c5; i++){
		cout<<"5";
	}
	for(int i=0; i<=count0; i++){
		cout<<"0";
	}
	
	return 0;
	
	
}
