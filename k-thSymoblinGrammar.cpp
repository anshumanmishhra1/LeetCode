class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==0) return 0;
        if(k%2==0){ //even hai so flip kr do ans ko 
            int ans = kthGrammar(n-1,k/2);
            if(ans == 0) return 1;
            else return 0;
        }
        else{ //odd hai k so same answer return kr do
            return kthGrammar(n-1,k/2+1);
        }
    }
};