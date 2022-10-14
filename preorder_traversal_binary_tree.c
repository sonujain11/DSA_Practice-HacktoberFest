#include <stdio.h>
#include <stdlib.h>
struct node 
{ 
    int val; 
    struct node *left, *right; 
}; 
struct node* newNode(int item) 
{ 
    struct node* temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->val = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
void preorder(struct node* root) 
{ 
    if (root != NULL) 
    { 
        printf("%d ", root->val); 
        preorder(root->left); 
        preorder(root->right);
    } 
} 
struct node* insert(struct node* node, int val) 
{ 
    if (node == NULL) return newNode(val); 
    if (val < node->val) 
        node->left  = insert(node->left, val); 
    else if (val > node->val) 
        node->right = insert(node->right, val);    
    return node; 
} 
   
int main() 
{ 
    struct node* root = NULL; 
    root = insert(root, 200); 
    insert(root, 120); 
    insert(root, 80); 
    insert(root, 160); 
    insert(root, 280); 
    insert(root, 240); 
    insert(root, 320);
    preorder(root); 
   
    return 0; 
}
