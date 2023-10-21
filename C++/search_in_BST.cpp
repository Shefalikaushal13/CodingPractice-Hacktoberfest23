#include <bits/stdc++.h>
using namespace std;

bool searchInBST(BinaryTreeNode<int> *root , int k) {
    // corner case
    if(root == NULL) {
        return false;
    }
    bool flag = false;
    if(k < root -> data) {
        flag = searchInBST(root -> left, k);
    } else if(k > root -> data) {
        flag = searchInBST(root -> right, k);
    } else {
        return true;
    }
    
    return flag;
}
