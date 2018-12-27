int bin_search(int a[], int l, int r, int x){
	if(r >=l){
		int mid = l + (r - l)/2;
		if(a[mid] == x)	return mid;
		if(a[mid] > x)	return bin_search(a, l, mid-1, x);
		return bin_search(a, mid+1, r, x);
	}
	return -1;
}
