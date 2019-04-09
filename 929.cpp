class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        unordered_set<string> temp;
        string word;
        bool ignoreFlag = false;
        bool domainName = false;
        for(int i=0;i<emails.size();i++)
        {
            word="";
            domainName = false;
            ignoreFlag = false;
            for(int j=0;j<emails[i].size();j++)
            {
                if(domainName){
                    word += emails[i][j];
                }
                else{
                    if(emails[i][j] == '+')
                       ignoreFlag = true; 
                    if(emails[i][j] == '@')
                       domainName = true; 
                    if(emails[i][j] != '.' && !ignoreFlag||domainName)
                       word += emails[i][j];
                }
  
            }
            temp.insert(word);
        }
        return temp.size();
    }
};