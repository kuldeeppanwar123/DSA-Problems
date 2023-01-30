void helper(string &digits ,int idx , vector<string>&map,string result , vector<string>&ans ){
        if(idx==digits.length()){
            ans.push_back(result);
            return;
        }

        int digit = digits[idx]-'0';
        string str = map[digit];
        for(int i=0; i<str.length();i++){
            result+=str[i];
            // result.push_back(str[i]);
            helper(digits,idx+1,map,result,ans);
            // result.erase(i);
            result.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> map= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(digits.length()==0)
        return ans;
         
         string result="";
         helper(digits, 0,map,result,ans);

         return ans;
    }




problem: 17. Letter Combinations of a Phone Number

Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
