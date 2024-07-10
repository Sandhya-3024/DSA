
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n=5;
    int mini=INT_MAX;
    int a[n]={10,80,77,88,2};
    for(int i=0;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    cout<<mini;
    return 0;
}
