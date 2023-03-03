class Solution {
public:
    double average(vector<int>& salary) {
        int min = *min_element(salary.begin(), salary.end());
        int max = *max_element(salary.begin(), salary.end());
        int sum = accumulate(salary.begin(), salary.end(),0);
        return double(sum - min - max)/(size(salary)-2);
    }
};