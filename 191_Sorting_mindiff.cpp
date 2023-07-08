vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>temp;

        sort(arr.begin(),arr.end());

        int mindiff = arr[1]-arr[0];
        temp.push_back(arr[0]);
        temp.push_back(arr[1]);
        ans.push_back(temp);

        for(int i=2; i<arr.size(); i++){
            int diff = arr[i]-arr[i-1];

            if(mindiff==diff){
                temp.clear();
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                ans.push_back(temp);
            }
            else if(mindiff>diff){
                mindiff = diff;
                temp.clear();
                ans.clear();
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
