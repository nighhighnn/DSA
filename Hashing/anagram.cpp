//anagram of string are same when sorted then store it into map of vector of string

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > v;
     map <string, vector<int> > mp;
    for(int i=0; i<A.size(); i++){
        vector <char> s;
        string str="";
        for(int j=0; j<A[i].size(); j++){
            s.push_back(A[i][j]);
        }
        sort(s.begin(),s.end());
        for(int k=0; k<A[i].size(); k++){
            str += s[k];
        }
            mp[str].push_back(i+1);
        }
    }
    for(auto it = mp.begin(); it!=mp.end(); it++){
        vector<int> temp = (it->second);
        v.push_back(temp);
    }
    return v;
}