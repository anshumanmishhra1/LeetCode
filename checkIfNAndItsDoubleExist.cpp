class Solution {
public:
    bool jarvis(vector<int>& a,int target,int k)
    {
        int i=0,j=a.size()-1;
        while(i<=j)
        {   
            int mid=(i+j)/2;
            if(a[mid]==target && mid!=k)
                return true;
            else if(a[mid]>target)
                j=mid-1;
            else
                i=mid+1;
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
           if(jarvis(arr,2*arr[i],i))
               return true;
        }
        return false;
    }
};