// https://leetcode.com/problems/majority-element-ii/description/

/*

Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109
 

Follow up: Could you solve the problem in linear time and in O(1) space?

*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {

        // https://leetcode.com/problems/majority-element-ii/solutions/543672/boyer-moore-majority-vote-algorithm-explained/

        int y(-1), z(-1), cy(0), cz(0);
    
	    for (const auto & x: a) {
    		if (x == y) cy++;
	    	else if (x == z) cz++;
		    else if (! cy) y = x, cy = 1;
		    else if (! cz) z = x, cz = 1;
		    else cy--, cz--;

        }
      
        cy = cz = 0;
        for (const auto & x: a)
		    if (x == y) cy++;
			else if (x == z) cz++;
  
	    vector<int> r;
	    if (cy > size(a)/3) r.push_back(y);
	    if (cz > size(a)/3) r.push_back(z);
	    return r;
    }
};

