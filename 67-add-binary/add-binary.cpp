class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size()-1;
        int n = b.size()-1;
        string ans = "";

        int carry = 0;

        while(m >= 0 || n >= 0 || carry) {
            int sum = carry;
            if(m >= 0) {
                sum += a[m] - '0';
                m--;
            }
            if(n >= 0) {
                sum += b[n] - '0';
                n--;
            }

            ans.push_back((sum%2) + '0');
            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};