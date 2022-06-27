class Solution {
public:
    string fractionToDecimal(int n, int d) {
        string result = "";
        if((n<0 && d>0) || (n>0 && d<0)){
            result.push_back('-');
        }
        long nl = (long)abs(n);
        long dl = (long)abs(d);
        long rem = nl;
        long quo;
        bool decimal = true;
        map<long, int> mp;
        
        while(result.size() < 10000) {
            quo = rem / dl;
            rem = rem % dl;
            result.append(to_string(quo));
            if(rem == 0){
                break;
            }
            if(decimal){
                result.push_back('.');
                decimal = false;
            }
            if(mp.count(rem)){
                result.insert(mp[rem], "(");
                result.push_back(')');
                break;
            }
            else{
                mp[rem] = result.size();
            }
            rem *= 10;
        }
        
        return result;
    }
};