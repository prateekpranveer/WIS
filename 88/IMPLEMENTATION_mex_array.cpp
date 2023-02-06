vector<int> mexArray(int n,int a[])
	{
	    unordered_set<int>us;
	    sort(a, a+n);
	    reverse(a, a+n);
	    int mex = 0;
	    int maxi = INT_MIN;
	    vector<int>v;
	    for (int i = 0; i<n; i++) {
	        us.insert(a[i]);
	        if (a[i]==0) {
	            while(us.find(mex)!=us.end()) {
	                mex++;
	            }
	            v.push_back(mex);
	        }
	        else {
	            v.push_back(mex);
	        }
	    }
	    return v;
		//code here
	}