class Solution {
public:
    int minSwaps(string s) {

        stack<char>st;

        for(char ch : s) {
            if(ch == '[') {
                st.push(ch);
            }
            else {
                if(!st.empty() && st.top() == '[') {
                    st.pop();
                }
                else {
                    st.push(ch);    
                }
            }
         }

         int open = 0;
        while (!st.empty()) {
            if (st.top() == '[')
                open++;
            st.pop();
        }

        return (open + 1) / 2;
    }
};