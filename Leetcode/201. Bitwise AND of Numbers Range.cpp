class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int toShift = 0;
        while(left != right)  {
		    left = left>>1; 
		    right= right>>1;
		    toShift++;  
		}
		return left<<toShift;
    }
};