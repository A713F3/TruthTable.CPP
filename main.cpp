#include <iostream>
#include <vector>
#include <string>
#include "TreeNode.hpp"
using namespace std;

string strip(string str){
    int start, end;

    for (int i = 0; i < str.length(); i++){
        if (str[i] != ' '){
            start = i;
            break;
        }
    }

    for (int i = str.length() - 1; i>=0; i--){
        if (str[i] != ' '){
            end = i;
            break;
        }
    }

    return str.substr(start, end-2);
}

bool is_seperable(string str){
    return (strip(str).length() != 1);
}

string seperate_parts(string str, int &offset){
    int count = 0;
    int start=offset, end=offset;

    for (int i = offset; i < str.length(); i++){
        char c = str[i];

        if (c == '(') {
            if (count == 0) start = i;
            count++;
        }
        if (c == ')'){
            count--;
            if (count == 0) end = i;
        }
    }
    offset = end;

    return str.substr(start, end+1);
}


TreeNode *str_to_tree(TreeNode *tree, string str){
    if (is_seperable(str)){
        int offset = 0;

        string first = seperate_parts(str, offset);
        
        int op = offset;
        while(str[op] != '&' && str[op] != '|') op++;

        char oper = str[op];

        offset = op;

        string second = seperate_parts(str, ++offset);

        cout << "first: " << first << endl;
        cout << "second: " << second << endl;
        cout << "op: " << oper << endl;

        // recursive call
    }
}
// ((())()()) 
// "(p & (q | a)) | p"

int main(){

    string str = "((a & q) & q) | p";

    TreeNode *test = new TreeNode();

    test = str_to_tree(test, str);

    cout << "STRIPPED:-" << strip("   aasa      ") << "-" << endl;
}