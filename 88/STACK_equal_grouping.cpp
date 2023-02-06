int evenGrouping(int n,int a[])
	{
	    for (int i = 0; i<n; i++) {
	        int ct = 0;
	        while (a[i]) a[i]/=2, ct++;
	        a[i] = ct;
	    }
	    
	    stack<int>st;
	    for (int i = 0; i<n; i++) {
	        if (st.empty()) st.push(a[i]);
	        else if (a[i]==st.top()) st.pop();
	        else st.push(a[i]);
	    }
	    return st.size();
		//code here
	}