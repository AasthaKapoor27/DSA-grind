class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left;
        int ans = 0;

        unordered_set<char> st;

        for(int right = 0; right < s.length(); right++){

            while(st.count(s[right])){
                st.erase(s[left]);
                left++;

            }
            st.insert(s[right]);

            int length = right - left +1;

            if(length > ans){
                ans = length;
            }


        }
        return ans;
        
    }
};