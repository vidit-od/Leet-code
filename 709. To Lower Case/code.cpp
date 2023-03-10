class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout << s << endl;
        return s;
    }
};