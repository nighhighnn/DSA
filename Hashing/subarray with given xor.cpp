// find the prefix xor 
// we have (some subarray exepting subarray whose xor is B) Y ^ B = xor
// Y = xor ^ B which means if there exist some Y(some subarray whose xor of elements is Y) return that freq of Y subarrays
int Solution::solve(vector<int> &A, int B) {
    map <int , int> mp;
    int count =0;
    int xorr = 0;
    for(int i=0; i<A.size(); i++){
        xorr ^= A[i];
        if(xorr == B)
        count++;
        if(mp.find(xorr ^ B) != mp.end())
        count += mp[xorr ^ B];
        mp[xorr]++;
    }
    return count;
}
