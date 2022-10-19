// leetcode problem link :https://leetcode.com/problems/find-largest-value-in-each-tree-row/description/ 
 class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        if(!root){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
       // int a;
       // TreeNode*front;
        while( q.size()!=0){
           int n= q.size();
               int a=INT_MIN;      
            for( int i=0; i<n; i++){
            TreeNode*front=q.front();
               q.pop();
               if(front->val>a){
                   a=front->val;
               }
           if(front->left){
               q.push(front->left);
           }
           if(front->right){
               q.push(front->right);
           }
           }
           v.push_back(a);      
        }
        return v;
    }
};