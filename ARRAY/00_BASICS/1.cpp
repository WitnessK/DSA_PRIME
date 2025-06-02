//Print all Distinct (Unique) Elements in given Array

#include<bits/stdc++.h>
using namespace std;

//using hashing 
vector<int> findDistinct(vector<int> &arr){
    unordered_set<int> set(arr.begin(), arr.end());

    return vector<int> (set.begin(), set.end());
}

int main(){
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    
  	vector<int> res = findDistinct(arr);
  	for (int ele: res)
      	cout << ele << " ";
    
    cout<<"Earlier was: "<<endl;
  	for (int ele: arr)
      	cout << ele << " ";
    
   return 0;
}