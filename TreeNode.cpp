#include "TreeNode.hpp"
#include <vector>
#include <string>

TreeNode::TreeNode(){}

TreeNode::TreeNode(std::string data) 
: data(data){}

std::string TreeNode::getData(){return data;}

std::vector<TreeNode*> TreeNode::getChildren(){return children;}

void TreeNode::appendChild(TreeNode *child){
    children.push_back(child);
}




