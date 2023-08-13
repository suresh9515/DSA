#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
	 //take two loops just compare the  i and i+1 elements and swap until its get sorted
   
   // optimization can takes place by traversing second loop for n-i-1 because its if we 
   // traverse loop at end one largest element is fixed so in next itreation we cant even get into it
    for(int i = 0;i < n; i++){
        for(int j = 0 ; j < n - i -1; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
	int a[] = {2, 1, 3, 4};
	bubbleSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
	

