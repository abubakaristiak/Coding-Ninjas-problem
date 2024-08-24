#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
      public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
bool isCompleteBinaryTree(TreeNode<int> *root)
{
   // Write your code here
    if(root == NULL) return true;
    queue<TreeNode<int> *> q;
    q.push(root);

    bool isFind = false;
    while(!q.empty())
    {
        TreeNode<int> * pr = q.front();
        q.pop();


        if(pr->left){
            if(isFind) return false;
            q.push(pr->left);
        }
        else{
            isFind =  true;
        }


        if(pr->right){
            if(isFind) return false;
            q.push(pr->right);
        }
        else{
            isFind =  true;
        }
    }
    return true;
}
*/