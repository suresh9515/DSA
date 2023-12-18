#include<bits/stdc++.h>
using namespace std;
int main(){
  
  string str1 = "21-10-1945";
  string str2 = "21-10-1947";
  str1=str1.substr(str1.length()-4,4);
  str2=str2.substr(str2.length()-4,4);
  int a = stoi(str1);
  int b= stoi(str2);
  cout<<a-b;
  

}
