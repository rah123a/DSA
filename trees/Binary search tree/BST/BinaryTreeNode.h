class sortedLL{
  Node<int>* lhead; 
  Node<int>* ltail;
  Node<int>* rhead;
  Node<int>* rtail;
};
sortedLL convertLL(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        sortedLL a;
        a.lhead=NULL;
        a.ltail=NULL;
        a.rhead=NULL;
        a.rtail=NULL;
        return a;
    }
    sortedLL output;
    sortedLL left=convetLL(root->left);
    sortedLL right=convetLL(root->right);
     
    Node<int>* node=new Node<int>(root->data);
    if(left.lhead==NULL)
    {
        output.lhead=node;
        output.ltail=node;
    }
    else{
        output.ltail->next=node;
    }
    node->next=right.rhead;
    return output;
    
}
Node<int>* constructBST(BinaryTreeNode<int>* root) {

    if(root==NULL)
    {
        return NULL;
    }
    sortedLL output;
    output=convertLL(root);
    return output.lhead;
    /*Node<int>* head;
    if(root==NULL)
    {  
        return NULL;
    }
    Node<int>* New=new Node<int>(root->data);
    Node<int>* l;
    Node<int>* r;
    if(root->left!=NULL)
    {
    l=constructBST(root->left);
        Node<int>* temp=l;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=New;
    }
    if(root->right!=NULL)
    {
     r=constructBST(root->right);
    }
    
    New->next=r;
    
    if(root->left!=NULL)
    {
        return l;
    }
    return New;*/
}
