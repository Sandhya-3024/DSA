// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n=5;
    int maxi=INT_MIN;
    int a[n]={10,80,77,88,2};
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    cout<<maxi;
    return 0;
}
