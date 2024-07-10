// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    vector<int>arr={12,23,11,10,15,16};
   // reverse(arr.begin(),arr.end());
   /* int left=0;
    int right=n-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }*/
    
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<n;i++){
    cout<< ans[i];
    }
}
