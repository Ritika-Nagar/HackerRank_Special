int birthday(vector<int> s, int d, int m) {
    int n=s.size();
    if(n==1){
        if(s[0]==d){
            return 1;
        }
    }
    
    
    
    int i=0; 
    int j=0; 
    
    int sum=0;
    int cnt=0;
    
    while(j<n){
        sum+=s[j];
        if(j-i+1 <m){// maintaining the length
            j++;
            
        }else {
            if(sum==d){
                cnt++;
            }
            sum=sum-s[i];
            
            i++;
            j++;
            
        }
    }
