#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<int, int> >& p1,pair<int, pair<int, int> >& p2){
    if(p1.second.second!= p2.second.second){
		return p1.second.second > p2.second.second;
	}
	else {
		return p1.second.first < p1.second.first;
	}
}
int main() {
	// code
	long t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    unordered_map<int, pair<int, int> > m;
 	    for(long i=0; i<n; i++){
	        long temp;
	        cin>>temp;
	        if(m.find(temp)!=m.end()){
	            m[temp].second++;
	        } else {
	            m[temp] = make_pair(i, 1);
	        }
	    }
	    vector< pair<int, pair<int, int>> > v;
	    for(auto& it: m){
	        v.push_back(it);
	    }
	    
	    sort(v.begin(), v.end(), cmp);
	    
	    for(auto& it: v){
	        for(int i=0; i<it.second.second; i++){
	            cout<<it.first<<" ";
	        }
	    }
	}
	
	return 0;
}