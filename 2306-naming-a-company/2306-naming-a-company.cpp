class Solution {
public:
    // vector<string> ideas_global;
    // bool checkstring(string a,string b){
    //     for(string a1 : ideas_global){
    //         if(a == a1 || b == a1)return false;
    //     }
    //     return true;
    // }
    long long distinctNames(vector<string>& ideas) {
        long long ans=0;
        sort(ideas.begin(),ideas.end());
        set<string> s[26];
        int j=0;
        for(int i=0;i<26 && j<ideas.size();){
            if(ideas[j][0]-97 != i){
                i++;
                continue;
            }
            string a = ideas[j];
            a.erase(0,1);
            cout<<"HEllo"<<a;
            s[i].insert(a);
            // cout<<"cds"<<s[i].size()<<endl;
            j++;
        }
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                if(s[i].empty() || s[j].empty())continue;
                // cout<<s[i].size()<<s[j].size();
                set<string> Union;
                set<string> Intersection;
                insert_iterator<set<string>> IntersectIterate(Intersection,Intersection.begin());
                // insert_iterator<set<string>> UnionIterate(Union, Union.begin());
                set_intersection(s[i].begin(), s[i].end(),s[j].begin(), s[j].end(), IntersectIterate);
                // set_union(s[i].begin(), s[i].end(), s[j].begin(), s[j].end(),UnionIterate);
                int a1 = s[i].size()-Intersection.size();
                int a2 = s[j].size()-Intersection.size();
                ans += 2*a1*a2;
            }
        }
        // for(int l=0;l<ideas.size();l++){
        //     string a = ideas[l];
        //     a.erase(0,1);
        //     for(int r=l+1;r<ideas.size();r++){
        //         if(ideas[l][0] == ideas[r][0]){
        //             continue;
        //         }    
        //         string b = ideas[r];
        //         b.erase(0,1);
        //         if(checkstring(ideas[r][0]+a,ideas[l][0]+b)){
        //             cout<<l<<r;
        //             ans+=2;
        //         }
        //     }
        // }
        return ans;
    }
};