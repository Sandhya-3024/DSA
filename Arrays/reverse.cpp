#include<bits/stdc++.h>
void reverseArray(vector<int> &arr , int m) {

   // reverse(arr.begin()+m+1, arr.end());
  /* int n=arr.size();
   int right=n-1;
   int left=m+1;
        while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }*/
    stack<int>st;
    vector<int>temp;
    int n=arr.size();
    for (int i = m + 1; i < n; i++) {
      st.push(arr[i]);
    }
   temp.resize(st.size());
   int i=0;
    while(!st.empty()){
        temp[i]=st.top();
        st.pop();
        i++;
    }
    int k=m+1;
    for (int j = 0; j < temp.size(); j++) {
        arr[k] = temp[j];
        k++;
    }
}
