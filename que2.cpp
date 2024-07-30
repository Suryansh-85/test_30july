//Q2 Write a function that reverses a string. The input string is given as an array of characters s.

//You must do this by modifying the input array in-place with O(1) extra memory.

 

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            // Swap the characters at left and right indices
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            // Move the pointers towards the center
            left++;
            right--;
        }
    }
