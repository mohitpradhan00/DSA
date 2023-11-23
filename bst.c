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


struct node* minVal(struct node* node){
    struct node* temp = node;
    if(temp == NULL)
        return temp;
    while(temp != NULL){
        temp = temp->left;
    }
    return temp;
}

struct node* deleteNode(struct node* node, int value){
    // base case
    if(node == NULL)
        return node;
    if(node->data == value){
        // 0 child
    if(node->left == NULL && node->right == NULL){
        free(node);
        return NULL;
    }
        // 1 child
    if(node->left != NULL && node->right == NULL){
        struct node* temp = node->left;
        free(node);
        return temp;
    }
    if(node->right != NULL && node->left == NULL){
        struct node* temp = node->right;
        free(node);
        return temp;
    }
        // 2 child
    if(node->left != NULL && node->right != NULL){
        int mini = minVal(node->right)->data;
        node->data = mini;
        node->right = deleteNode(node->right, mini);
        return node;
    }
    }
    else if (node->data > value){
        node->left = deleteNode(node->left, value);
        return node;
    }
    else {
        node->right = deleteNode(node->right, value);
        return node;
    }
}


// struct node* minVal(struct node* node){
//     struct node* temp = node;
//     if(temp == NULL)
//         return temp;
//     while(temp != NULL){
//         temp = temp->left;
//     }
//     return temp;
// }

// struct node* deletenode(struct node* root, int key){
//     if (root==NULL){
//         return root;
//     }
//     if(root->data==key){
//         //0 child
//         if(root->left==NULL && root->right==NULL){
//             free(root);
//             return NULL;
//         }
//         //1 child
//      if(root->left!=NULL && root->right==NULL){
//         struct node* temp=root->left;
//         free(root);
//         return temp;
//      }
//      if(root->left==NULL && root->right!=NULL){
//         struct node* temp=root->right;
//         free(root);
//         return temp;
//      }   
//     // 2 child
//     if(root->left!=NULL && root->right!=NULL){ 
//      int mini = minVal(root->right)->data;
//         root->data = mini;
//         root->right = deletenode(root->right, mini);
//         return root;
//     }
    
//     else if (root->data > key){
//         root->left= deletenode(root->left, key);
//         return root;
//     }
//     else {
//         root->right= deletenode(root->right, key);
//         return root;
    
//     }
// }
// }

int main(){
    struct node* b0 = newnode(10);

    insert(b0, 5);
    insert(b0, 15);
    insert(b0, 2);
    insert(b0, 7);
    insert(b0, 17);
//       10
//     /    \
//    5      15
//   / \       \
//  2   7       17  

    inorder(b0);
    deleteNode(b0, 5);
    printf("\n");
    inorder(b0);
    return 0;
}
// int main()
// {
//     /* Let us create following BST
//               50
//            /     \
//           30      70
//          /  \    /  \
//        20   40  60   80 */
//     struct node* root = NULL;
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);
 
//     // Print inorder traversal of the BST
//     inorder(root);

//     int key = 6;
 
//     // Searching in a BST
//     if (search(root, key) == NULL)
//         printf("\n%d not found", key);
//     else
//         printf("\n%d found", key);
 
//     key = 60;
 
//     // Searching in a BST
//     if (search(root, key) == NULL)
//         printf("\n%d not found", key);
//     else
//         printf("\n%d found", key);
 
//     return 0;
// }

