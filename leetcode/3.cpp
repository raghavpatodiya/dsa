class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) {
            return 0;
        }
        
        int maxLength = 0;
        int start = 0; // Starting index of the current substring     
        // Create a map to track the last occurrence index of each character
        unordered_map<char, int> lastIndex;   // key, value   
        for (int end = 0; end < n; ++end) {
            if (lastIndex.find(s[end]) != lastIndex.end()) {
                // If the current character is already in the substring, update the start !
                // to the next index after the last occurrence of this character.
                start = max(start, lastIndex[s[end]] + 1);
            }          
            // Update the last occurrence index of the current character
            lastIndex[s[end]] = end;           
            // Calculate the length of the current substring and update maxLength
            maxLength = max(maxLength, end - start + 1);
        }
        
        return maxLength;
    }
};
