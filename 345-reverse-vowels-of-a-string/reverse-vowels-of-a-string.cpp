class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return true;
        }
        else return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(isVowel(s[i])&& isVowel(s[j]))
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if (isVowel(s[i]))
            {
                j--;
            }
            else if (isVowel(s[j]))
            {
                i++;
            }
            else {
                i++;
                j--;
            }

        }
        return s;
        
    }
};