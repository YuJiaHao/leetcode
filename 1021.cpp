class Solution {
public:
    string removeOuterParentheses(string S) {
        string final="";
        int point = 0;
        int temp_point = 0;
        // define ( is 1 and ) is -1
        for(int i=0;i<S.size();i++){
            temp_point = ( "(" == string(1, S[i]) )?1:-1;
            point+=temp_point;

            if(point!=0&&!(point==1&&temp_point==1)) 
                final += S[i];
        }
        
        return final;
    }
};