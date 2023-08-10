int getRow(vector<vector<int>>& matrix, int target){
        int n = matrix.size();
        int m = matrix[0].size();
        int start = 0;
        int end = n-1;
        int row = -1;

        while(start<=end){
            int mid = start+(end-start)/2;

            if(target>=matrix[mid][0] && target<=matrix[mid][m-1]){
                row = mid;
                break;
            }

            else if(target<matrix[mid][0])
                end = mid-1;
            else
                start = mid+1;
        }

        return row;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = getRow(matrix , target);
        if(row==-1)return false;

        int m = matrix[0].size();
        int start=0;
        int end = m-1;

        while(start<=end){
            int mid = start+(end-start)/2;

            if(target==matrix[row][mid])
             return true;

            else if(target<matrix[row][mid])
             end = mid-1;
            
            else
             start = mid+1;
        }

        return false;
    }
