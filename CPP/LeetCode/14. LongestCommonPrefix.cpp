class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int min = INT_MAX; 
        int c=0,flag=1;
        if(n==0){return "";}
        string st = "";
        for(int i=0;i<n;i++){
            if(min>strs[i].size()){
                min=strs[i].size();
            }
        }
        for(int i=0;i<min;i++){
            for(int j=0;j<n;j++){
                if(strs[0][i]==strs[j][i]){
                    continue;
                }
                else{
                    flag=0;
                }
            }
            if(flag==1){
                st+=strs[0][i];
                c++;
            }
            else{
                break;
            }
        }
        //string stt = "flow";
        return st;
    }    
};
