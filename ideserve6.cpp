class Solution {
public:
    string shortestPalindrome(string s) {
    string copy = s;
        if(s!=""){
    long long copyLength = copy.length();
    reverse(copy.begin(), copy.end());
        if(copy.compare(s)){
    string newString = s + "#"+copy;
        
    long long a = KMP(newString);

    long long l = newString.length();
    string s3 = newString.substr(0, (l - a));
    string last = s3.substr(copyLength+1, (l - a + 1));

    cout << last << endl;
    string result = last + s;
        return result;
    }
        else return s;
    }
        else
            return s;
    }
    
    long long KMP(string str)
{
    long long m = str.length();
    long long T[m];
    int j = 0;
    T[0] = 0;
    for (int i = 1; i < m; i++)
    {
        while (j > 0 && str[j] != str[i])
            j = T[j - 1];
        if (str[j] == str[i])
            j++;
        T[i] = j;
    }
    long long a = T[m - 1];
    return a;
}
};