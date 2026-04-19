class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string str : strs){
            ans += to_string(str.length()) +  '#' + str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;

        while(i<s.length()){
            int j=i;
            while(s[j]!='#') j++;
            int length = stoi(s.substr(i, j-i));

            ans.push_back(s.substr(j+1, length));

            i = j+length+1;
        }
        return ans;
    }
};
