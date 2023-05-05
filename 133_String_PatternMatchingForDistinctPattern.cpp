vector<int>patternmatch(string str ,string pat){
    vector<int>ans;
    int patSize = pat.size();
    int j=0;
    int idx = 0;

    for(int i=0; i<str.size(); i++){
        if(j==patSize){
            ans.push_back(idx);
            idx = i;
        }
        if(str[i]!=pat[j]){
            j=0;
            idx = i;
        }
        if(str[i]==pat[j]){
            j++;
        }
    }
    if(j==patSize)
    ans.push_back(idx);

    if(ans.size()==0)
    ans.push_back(-1);

    return ans;
}
