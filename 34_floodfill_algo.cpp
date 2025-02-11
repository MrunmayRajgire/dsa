#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void dfs(vector<vector<int>>&img,int row, int col,int ic,int color)
        {
            if(row<0 || row==img.size() || col<0 || col==img[0].size()) return;
            if(img[row][col]!= ic) return;
            img[row][col] = color;
            dfs(img, row-1,col,ic,color);
            dfs(img, row,col+1,ic,color);
            dfs(img, row+1,col,ic,color);
            dfs(img, row,col-1,ic,color);
        }
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            if(image[sr][sc] == color) return image;
            int inicolor = image[sr][sc];
            dfs(image,sr,sc,inicolor,color); 
            return image;
        }
    };