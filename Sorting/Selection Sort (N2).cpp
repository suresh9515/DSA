#include<bits/stdc++.h>
using namespace std;

//NOTE SELECTION SORT IS NOT STABLE FOR SAME ELEMNETS OR DUPLICATED ELEMENTS

void selectionSort(int arr[], int n){
    
    for(int i=0; i< n-1; i++){
    	int min_index = i; //0  // 1
    	for(int j = i+1; j<n; j++){
    		if(arr[j]<arr[min_index]){   // if(1<2) make min_idx = 1 i.e j =1
    			min_index =j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
    
    
}

int main() {
	int a[] = {2, 1, 3, 4};
	selectionSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
