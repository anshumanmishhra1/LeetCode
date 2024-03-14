class Solution {
public:
    int numberOfSteps(int num) {
         int n=num;
        int count=0;
        while(n!=0){
            if(n%2==0){//Even
                n/=2;
            }
            else{//odd
                n-=1;
            }
            count++;
        }
        return count;
    }
};