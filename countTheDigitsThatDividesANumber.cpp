class Solution {
public:
    int countDigits(int num) {
        int rem;
        int digit;
        int count;
        int originalNum = num;
        while(num!=0){
            int digit = num%10;
            num=num/10;
            if(originalNum%digit==0) count++;
        }
        return count;
    }
};