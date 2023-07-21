vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>set1(nums1.begin(),nums1.end());
        set<int>set2(nums2.begin(),nums2.end());

        set<int>::iterator it1 = set1.begin();
        set<int>::iterator it2 = set2.begin();
        // cout<<"set1 size "<<set1.size()<<endl;
        // cout<<"set2 size "<<set2.size()<<endl;

        while(it1!=set1.end() && it2!=set2.end()){
            if(*it1==*it2)
            {
                // cout<<"inserting "<<*it1<<endl;
                ans.push_back(*it1);
                it1 = next(it1,1);
                it2 = next(it2,1);
            }
            else if(*it1<*it2){
                advance(it1,1);
            }
            else 
                 advance(it2,1);
        }
        return ans;
    }
