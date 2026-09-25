/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(Node*node, vector<int>&ans){
        if(node == NULL) return;

        ans.push_back(node->val);
        for(auto it: node->children){
            solve(it,ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int>ans;
        solve(root, ans);
        return ans;
    }
};