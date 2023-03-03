class Solution {
public:
    double average(vector<int>& salary) {
       int min = salary[0];
       int max = salary[0];
       double sum = salary[0];
       for(int i = 1; i<size(salary); i++){
           if( salary[i] < min){
               min = salary[i];
           }
           else if(salary[i] > max){
               max = salary[i];
           }
           sum += salary[i];
       } 
       sum = sum - min - max;
       return sum = sum / (size(salary)-2);
    }
};