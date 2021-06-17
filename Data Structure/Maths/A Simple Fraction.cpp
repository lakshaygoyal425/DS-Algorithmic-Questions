class Solution{
	public:
	string fractionToDecimal(int num, int den) {
	    if (num == 0)
            return "0";
            
        int sign = (num < 0) ^ (den < 0) ? -1 : 1;
 
        num = abs(num);
        den = abs(den);   
        
        int initial = num / den;
        
        string res;
        
        if (sign == -1)
            res += "-";
        
        res += to_string(initial);
        
        if (num % den == 0)
            return res;
 
        res += ".";
        
        int rem = num % den;
        map<int, int> mp;
        
        int index;
        bool repeating = false;
        while (rem > 0 && !repeating) {
            if (mp.find(rem) != mp.end()) {
 
            index = mp[rem];
            repeating = true;
            break;
        }
        else
            mp[rem] = res.size();
 
        rem = rem * 10;
        int temp = rem / den;
        res += to_string(temp);
        rem = rem % den;
        }
        
        if (repeating) {
        res += ")";
        res.insert(index, "(");
    }
 
    return res;
 
	}
};
