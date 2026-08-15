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
    Node* check(vector<vector<int>>& grid,int d,int h ,int r,int l,Node* root){
        int num =grid[h][l];
        bool t =true;
        for(int i = h ; i <=d ;i++){
            for(int j = l ; j <=r ;j++){
                if(num != grid[i][j]) {
                    root->val = num;
                    root->isLeaf = false;
                    t=false;
                    break;
                }
            }
        }
        if(t == true) {
            root->val = num;
            root->isLeaf = true;
            return root;
        }
        root->val = num;
        root->isLeaf = false;
        root->topLeft = check(grid,(d+h)/2,h,(r+l)/2,l,new Node()) ;
        root->topRight =  check(grid,(d+h)/2,h,r,((l+r)/2)+1,new Node() );                
        root->bottomLeft =  check(grid,d,((h+d)/2)+1,(((r+l))/2),l ,new Node());
        root->bottomRight =  check(grid,d,((h+d)/2)+1,r,((r+l)/2)+1 ,new Node());

        return root ;
    }


class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        Node* root = new Node();
    int h = 0,d = grid.size()-1,l=0,r=grid[0].size()-1;
    return check(grid,d,h,r,l,root);
    }
};