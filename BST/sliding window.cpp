#include<iostream>
using namespace std;
int main(){
	int n;
	n=10;
	int arr[n]={1,2,30,-5,20,7,2,3,99,1};
	int k =4;
	int currsum =0;
	for(int j =0; j <k; j++){
			currsum+=arr[j];
		}//25
	int maxsum =currsum;	
		for(int i =k; i<n; i++){
		   
            currsum=currsum + arr[i]-arr[i-k];		   
		   
			if(currsum>maxsum){
			maxsum=currsum;
		}
		
	}
	cout<<maxsum;
}
