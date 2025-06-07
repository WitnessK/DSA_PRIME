//Duplicate within K Distance in an Array
/*
Input: k = 3, arr[] = [1, 2, 3, 4, 1, 2, 3, 4]
Output: No
Explanation: Each element in the given array arr[] appears twice and the distance between every element and its duplicate is 4.
*/
#include<bits/stdc++.h>
using namespace std;

bool checkDuplicatesWithinK(vector<int> &arr, int n){
    unordered_set<int> check;

    for (int i=0;i<arr.size();i++){
        if (check.find(arr[i]) != check.end()){
            return true;
        }

        check.insert(arr[i]);

        if(i>=n){
            check.erase(arr[i-n]);
        }
    }

    return false;
}

int main(){
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    if (checkDuplicatesWithinK(arr, 3))
        cout << "Yes";
    else
        cout << "No";
   return 0;
}