/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int high = n, low = 1;
        while (true) {
            int mid = (high - low) / 2 + low;
            int res = guess(mid);
            if (res == 0) { 
                return mid;
            } else if (res == 1) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
};