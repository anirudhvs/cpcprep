int Solution::threeSumClosest(vector<int> &A, int B) {
    long min = INT_MAX;
    long answer;
    sort(A.begin(), A.end());
    
    long n = A.size();
    
    // cout<<"SORTED\n";
    // for(long i=0; i<n; i++){
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;
    
    for(long i=0; i<n-2; i++){
        long front = i+1; long back = n-1;
        
        while(front<back){
            long a, b, c;
            a = A[i];
            b = A[front];
            c = A[back];
            long sum = a+b+c;
            //cout<<"CHOSEN "<<a<<" "<<b<<" "<<c<<endl;
            //cout<<"SUM IS "<<sum<<endl;
            long curmin = abs(B - sum);
            if(curmin<min){
                //cout<<"CURMIN: "<<curmin<<" MIN: "<<min<<endl;
                answer = sum;
                min = curmin;
            }
            if(sum>B){
                
                while(front<back && c == A[back])
                back--;
                //cout<<"NEW BACK "<<back<<endl;
            }
            else if(sum<B){
                while(front<back && b == A[front])
                front++;
                //cout<<"NEW front "<<front<<endl;
            }
            else {
                //cout<<"RET"<<endl;
                return sum;
            }
        }
    }
    
    return answer;
}