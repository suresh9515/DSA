#include<iostream>
using namespace std;
int recursiveBnarysearch(int arr[] , int target,int n,int low,int high){
	//intitilize low and high
       
	    if(low<=high){
		
		int mid = (low +high)/2;
		if(arr[mid]==target){
			return 1; //that is index
		}
		else if(arr[mid]>target){
		recursiveBnarysearch(arr ,target,n,low,mid-1);
		}else{
			recursiveBnarysearch(arr ,  target,n,mid+1,high);
		}
}else{
	return -1;
}

}
int main(){
	int n;
	 cin>> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//arr1 = 1 2 3 4 5 6 7 8 9
	int target ;
	cin>>target;
	int low =0;
	int high = n-1;
	int element_idx = recursiveBnarysearch(arr , target,n,low , high);
	cout<<element_idx<<" ";
}
