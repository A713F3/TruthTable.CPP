#ifndef TreeNode_H
#define TreeNode_H

#include <vector>
#include <string>

class TreeNode{
private:
    std::vector<TreeNode*> children;
    std::string data;

public:
    TreeNode();
    TreeNode(std::string);

    std::string getData();
    std::vector<TreeNode*> getChildren();

    void appendChild(TreeNode*);
};

#endif