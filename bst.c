#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *right,*left;
};

struct node * newnode(int item){
    struct node* root=(struct node*)malloc(sizeof(struct node));
    root->data=item;
    root->right=root->left=NULL;
    return root;

}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}


struct node* insert(struct node* root, int key){
      
       if(root==NULL){
        return newnode(key);
       }
       if(key>root->data){
        root->right=insert(root->right,key);
       }
       else{
        
               root->left=insert(root->left,key);
       }

       return root;
       }


struct node* search(struct node* root, int key){
      
       if(root==NULL || root->data==key){
        return root;
       }
       if(key>root->data){
        return search(root->right,key);
       }
       else{
        
               return search(root->left,key);
       }

       }

int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // Print inorder traversal of the BST
    inorder(root);

    int key = 6;
 
    // Searching in a BST
    if (search(root, key) == NULL)
        printf("\n%d not found", key);
    else
        printf("\n%d found", key);
 
    key = 60;
 
    // Searching in a BST
    if (search(root, key) == NULL)
        printf("\n%d not found", key);
    else
        printf("\n%d found", key);
 
    return 0;
}

