// if (required sum - current element) is present in map then we push that index and current index else we insert cur ele -> ind in map
vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector <int> ans;
    map <int, int> mp;
    for(int i=0; i<A.size(); i++){
        if(mp.find(B-A[i]) != mp.end()){
            ans.push_back( mp[B-A[i]]+1 );
            ans.push_back(i+1);
            return ans;
        }
        if(mp.find(A[i]) == mp.end()){
            mp[A[i]] = i;
        }
    }
    return ans;
}