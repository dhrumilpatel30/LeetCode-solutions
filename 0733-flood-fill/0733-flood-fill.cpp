class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int> > pixels;
        vector<vector<int> > ans = image;
        int originalColor = image[sr][sc];
        if(color == originalColor)return ans;
        int m = image.size();
        int n = image[0].size();
        pixels.push({sr,sc});
        while(!pixels.empty()){
            pair<int,int> pixel = pixels.front();
            pixels.pop();
            ans[pixel.first][pixel.second] = color;
            if(0 != pixel.first){
                if(ans[pixel.first - 1][pixel.second] == originalColor)pixels.push({pixel.first - 1, pixel.second});
            }
            if(0 != pixel.second){
                if(ans[pixel.first][pixel.second - 1] == originalColor)pixels.push({pixel.first, pixel.second - 1});
            }
            if(m-1 != pixel.first){
                if(ans[pixel.first+1][pixel.second] == originalColor)pixels.push({pixel.first + 1, pixel.second});
            }
            if(n-1 != pixel.second){
                if(ans[pixel.first][pixel.second+1] == originalColor)pixels.push({pixel.first, pixel.second + 1});
            }
        }
        return ans;

    }
};