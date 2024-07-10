#include <iostream>
#include<climits>
#include<vector>
using namespace std;
int findsecondlargest(vector<int>& arr,int n){
    int secondlargest=INT_MIN;
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int findsecondsmallest(vector<int>& arr,int n){
    int secondsmallest=INT_MAX;
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondsmallest){
            secondsmallest=arr[i];
        }
    }
    return secondsmallest;
}
int main() {
    int n=5;
    vector<int>arr={12,23,11,15,16};
   int ans1= findsecondlargest(arr,n);
    int ans2=findsecondsmallest(arr,n);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}
