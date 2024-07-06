int findFloor(vector<long long> v, long long n, long long x) {
        long long low=0;
        long long high=n-1;
        int floor=-1;
        while(low<=high){
            long long mid=(low+(high-low)/2);
            if(v[mid]<=x){
                floor=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return floor;
    }
