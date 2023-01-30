void helper(string &str, int idx,string result, vector<string>&ans){

    if(idx==str.length()){
		if(result.length()>0)
		ans.push_back(result);
		return;
	}
	helper(str , idx+1,result,ans);
	result+=str[idx];
	helper(str, idx+1,result,ans);

}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string>ans;
	string result;
	helper(str, 0,result,ans);
	return ans;
	
}
