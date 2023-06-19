int getFloor(int arr[],int n, int x){
	int floor =-1;
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;

		if(arr[mid]<=x){
			low = mid+1;
			floor = arr[mid];
		}
		else{
			high = mid-1;
		}
	}
	return floor;
}

int getCeil(int arr[],int n, int x){
	int ceil = -1;
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;

		if(arr[mid]>=x){
			high = mid-1;
			ceil = arr[mid];
		}
		else{
			low = mid+1;
		}
	}
	return ceil;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr, arr+n);
    pair<int , int>ans;
	int floor = getFloor(arr , n , x);
	int ceil = getCeil(arr ,n , x);
	ans.first = floor;
	ans.second = ceil;
	return ans;

}
