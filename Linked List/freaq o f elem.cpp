// CPP program to count frequencies of array items
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
void countFreq(int arr[], int n)
{
    // Mark all array elements as not visited
    unordered_map<int, int> map;
    for(int i=0; i<n; i++){
    	map[arr[i]]++;
	}
	for(int x : map){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
 
int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
