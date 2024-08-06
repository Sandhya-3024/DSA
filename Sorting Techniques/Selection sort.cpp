#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0;i<=n-2;i++){//n-2 due to last elt is not checked 
   //because it is always sorted
     int mini=i;
     for(int j=i;j<=n-1;j++){//checks the minimum elt
       if (arr[j] < arr[mini]) {
         mini = j;
       }
     }
       swap(arr[i], arr[mini]);
     
      
   }

}
