/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    
    
    Node* maketree(vector<vector<int>>& grid,int col_start,int col_end,int row_start,int row_end){
        
        if (col_start == col_end){
            return new Node(grid[col_start-1][row_start-1],true);
        }
        Node* tl = maketree(grid,col_start,(col_end+col_start-1)/2,row_start,(row_end+row_start-1)/2);
        Node* tr = maketree(grid,(col_end+col_start-1)/2 + 1,col_end,row_start,(row_end+row_start-1)/2);
        Node* bl = maketree(grid,col_start,(col_end+col_start-1)/2,(row_end+row_start-1)/2 + 1,row_end);
        Node* br = maketree(grid,(col_end+col_start-1)/2 + 1,col_end,(row_end+row_start-1)/2 + 1,row_end);
        
        if(tl->val == tr->val and tr->val == bl->val and bl->val == br->val
           and tl->isLeaf and tr->isLeaf and bl->isLeaf and br->isLeaf){
            return new Node(tl->val,true);
        }
        else return new Node(true,false,tl,bl,tr,br);
    }
    
    Node* construct(vector<vector<int>>& grid) {
        int dim = grid.size();
        
        return maketree(grid,1,dim,1,dim);
    }
};