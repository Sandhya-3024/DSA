int middle(int A, int B, int C){
      vector<int>arr{A,B,C};
      int largest=-1;
      int second_largest=-1;
      for(int i=0;i<3;i++){
          if(arr[i]>largest){
              second_largest=largest;
              largest=arr[i];
              
          }
          else if(arr[i]<largest && arr[i]>second_largest){
              second_largest=arr[i];
          }
      }
     return second_largest;
    }

//Approach 2
    if(A<B && B<C || A>B && B>C) return B;
    else if(B<A && C>A || A<B && A>C) return A;
    else if(A<C && B>C || A>C && C>B) return C;
    }
