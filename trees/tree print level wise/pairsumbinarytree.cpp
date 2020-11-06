// Following is the Binary Tree node structure
/**************

***************/
bool findpair(BinaryTreeNode<int> *Root, int x)
{
    if(Root==NULL)
    {
        return false;
    }
    if(Root->data==x)
    {
        return true;
    }
    bool ans1=findpair(Root->left,x);
    bool ans2=findpair(Root->right,x);
    return (ans1&&ans2);
}
void pairsum(BinaryTreeNode<int> *Root, int sum,BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->data>sum)
    {
        return;
    }
    int x=sum-root->data;
    pairsum(Root,sum,root->left);
    pairsum(Root,sum,root->right);
    findpair(Root,x);
    if(findpair)
    {
        cout<<root->data<<" "<<x<<endl;
    }
}
void nodesSumToS(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
if(root==NULL)
{
    return;
}
    BinaryTreeNode<int> *Root=root;
    pairsum(Roor,sum,root);
}
//....................................
vector<int>* converttoarray(BinaryTreeNode<int>* root)
{
     if(root==NULL)
    {
        return;
    }
    vector<int>* output=new vector<int>();
    vector<int>* lefttoutput=convertoarray(root->left);
    for(int i=0;i<leftoutput.size();i++)
    {
        output[i]=leftoutput[i];
    }
    vector<int>* rightoutput=convertoarray(root->right);
    for(int i=0;i<rightoutput.size();i++)
    {
        output[output.size()+i]=rightoutput[i];
    }
     vector<int>* leftoutput=output.push_back(root->data);
    return output;
}
#include<vector>
void nodesSumToS(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
       if(root==NULL)
       {
           return;
       }
    vector<int>* output=converttoarray(root);

}

