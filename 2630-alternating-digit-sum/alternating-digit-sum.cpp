class Solution {
public:
    int alternateDigitSum(int n) {
    int evensum = 0;
    int oddsum = 0;

    string s = to_string(n);

    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';

        if (i % 2 == 0)
            evensum += digit;
        else
            oddsum += digit;
    }

    return evensum - oddsum;
        
    }
};