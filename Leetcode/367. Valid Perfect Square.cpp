class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1) return 1;
        
        long long int beg=1,end=num/2,mid;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(mid*mid==num) return 1;
            else if(mid*mid<num) beg=mid+1;
            else end=mid-1;
        }
        return 0;
    }
};