class Solution {
  public:
    vector<int> increment(vector<int> digits ,int N) {
        for(int i=N-1;i>=0;i--)
        {
            if(digits[i]<9)
            {digits[i]++ ; return digits;} 
            else
                digits[i]=0;
        }
        vector<int>newnumber(N+1,0);
        newnumber[0]=1;
        return newnumber;
        
        
    }
};
