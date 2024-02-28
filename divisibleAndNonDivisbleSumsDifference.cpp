class Solution {
public:
    int differenceOfSums(int n, int m) {
        int OddSum = 0;
        int divSum = 0;
        int res;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                OddSum+=i;
            }
            else{
                divSum+=i;
            }
        }
        
        res = OddSum-divSum;
        return res;
    }
};