class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int array[word1.size()+1][word2.size()+1];
        
        for(int i=0;i<word1.size()+1;i++)array[i][0]=i;
        for(int i=0;i<word2.size()+1;i++)array[0][i]=i;
        
        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                array[i][j] = min(
                    array[i-1][j] + 1,
                    min(
                        array[i][j-1] + 1,
                        array[i-1][j-1] + (word1[i-1]==word2[j-1] ? 0:1)
                    )
                );
                // cout<<array[i][j];
            }
            // cout<<endl;
        }
        
        for(int i=0;i<=word1.size();i++){
            for(int j=0;j<=word2.size();j++){
                cout<<array[i][j];
            }
            cout<<endl;
        }
        return array[word1.size()][word2.size()];
    }
};