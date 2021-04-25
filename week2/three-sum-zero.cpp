vector<vector<int> > Solution::threeSum(vector<int> &A) {

    sort(A.begin(), A.end());
    set< vector<int>> s; 
    vector< vector<int> > answer;
    
    int n = A.size();
    
    // cout<<"SORTED\n";
    // for(int i=0; i<n; i++){
    //     cout<<A[i]<<" ";
    // }
    
    
    for(int i=0; i<n; i++){
        int front = i+1,  back = n-1;
        
        while(front<back){
            long long sum;
            long long a, b, c;
            a = A[i];
            b = A[front];
            c = A[back];
            sum = a+b+c;
            //bool edge = 1;
            
            if(sum>0){
                back--;
            }
            if(sum<0){
                front++;
            }
            
            if(sum == 0){
                //cout<<"SIS "<<A[i]+A[front]<<endl;
                vector<int> triplet = {A[i], A[front], A[back]};
                if(s.find(triplet)==s.end()){
                    
                    answer.push_back(triplet);
                    s.insert(triplet);
                }
                front++;
                back--;
            }
        }
    }
    
    return answer; 
}