int countSquares(int N) {
    int cnt=0;
    for(int i=1;i<N;i++){
        if(i*i<N){
            cnt++;
        }
        else{
            break;
        }
    }
    return cnt;
    }
