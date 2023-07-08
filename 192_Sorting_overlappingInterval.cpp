static bool compare (vector<int> p1, vector<int> p2) {
    return p1[0] < p2[0] || (p1[0] == p2[0] && p1[1] < p2[1]);
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int res=0;
        sort(intervals.begin(),intervals.end(),compare);
        for(int i=1; i<intervals.size(); i++){
            if(intervals[res][1]>=intervals[i][0]){
                intervals[res][0] = min(intervals[res][0],intervals[i][0]);
                intervals[res][1] = max(intervals[res][1],intervals[i][1]);
            }
            else{
                res++;
                intervals[res] = intervals[i];
            }
        }
        intervals.resize(res+1);
        return intervals;
    }
