class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        if(n==1){
            if(s1[0] == s2[0]){
                return true;
            }
            else{
                return false;
            }
        }
        if(n==2){

        }
        int diff =0;
        int index;
        char diff11;
        char diff12;
        char diff21;
        char diff22;
        for( int i=0; i<n;i++){
            if( s1[i] != s2[i]){
                diff++;
                if(diff == 1){
                    diff11 = s1[i];
                    diff12 = s2[i];
                }
                else if(diff == 2){
                    diff21 = s1[i];
                    diff22 = s2[i];
                }
                else if( diff > 2 ){
                    return false;
                }
            }
        }
        if( diff == 0){
            return true;
        }
        else if (diff == 2 && diff11 == diff22 && diff12 == diff21){
            return true;
        }
        else{
            return false;
        }
    }
};