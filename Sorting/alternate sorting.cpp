#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[6]= {47,79,36,98,90,1};
	
	//even and odd simintainiously
	int even[3]; //even array
	int odd[3];
	int k=0;
	int y=0;
	//first even numbers we have to put in even
	for(int i=0; i<6; i++){
		if(arr[i]%2==0){
			even[k]=arr[i];
			k++;
		}else{
			odd[y]=arr[i];
			y++;
		}
	}  
	sort(even,even+3);
	sort(odd,odd+3);
	for(int i=0; i<3; i++){
		cout<<even[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<3; i++){
		cout<<odd[i]<<" ";
	}
	//increasing order
	cout<<endl;
     // output array
     for(int i=0; i<3; i++){
     	cout<<even[i]<<" ";
     	cout<<odd[i]<<" ";
	 }
	int output[6];
	int x=0;
	for(int i=0; i<6; i=i+2){
		output[i]=even[x];
		x++;
		
	}
	int m=0;
	for(int i=1; i<6; i=i+2){
		output[i]=odd[m];
		m++;
		
	}
	cout<<endl;
	for(int i=0; i<6; i++){
		cout<<output[i]<<" ";
		
	}
	
}
