#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* root = NULL, *temp, *cur;

struct node* create(){
	cur = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d", &(cur -> data));
	cur -> left = NULL;
	cur -> right = NULL;
	if(root == NULL)
		root = cur;
	else{
		temp = root;
		while(temp != NULL){
			if(cur -> data < temp -> data && temp -> left == NULL){
				temp -> left = cur;
				return root;
			}
			else if(cur -> data < temp -> data && temp -> left != NULL){
				temp = temp -> left;
			}
			else if(cur -> data >= temp -> data && temp -> right == NULL){
				temp -> right = cur;
				return root;
			}
			else if(cur -> data >= temp -> data && temp -> right != NULL){
                 temp = temp -> right;
			}
		}
	}
}

void inOrder(struct node* root){
	if(root != NULL){
		inOrder(root -> left);
		printf("%d ", root -> data);
		inOrder(root -> right);
	}
}

void preOrder(struct node* root){
	if(root != NULL){
		printf("%d ", root -> data);
		preOrder(root -> left);
		preOrder(root -> right);
	}
}

void postOrder(struct node* root){
	if(root != NULL){
		postOrder(root -> left);
		postOrder(root -> right);
		printf("%d ", root -> data);
	}
}

int main(){
	int choice;
	while(1){
		printf("1.create \n2.inorder \n3.preorder \n4.postorder \n5.exit\n");
		printf("\nEnter your choice: "); 
		scanf("%d", &choice);
		switch(choice){
			case 1:
				root = create();
				break;
			case 2:
				inOrder(root);
				break;
			case 3:
				preOrder(root);
				break;
			case 4:
				postOrder(root);
				break;
			case 5:
				exit(0);
		}
	}
}



/* 
OUTPUT:
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 75
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 43
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 67
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 89
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 56
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 23
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 22
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 32
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 84
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 100
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 1
Enter node data: 45
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 2
INORDER:
22 23 32 43 45 56 67 75 84 89 100 
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 3
PREORDER:
75 43 23 22 32 67 56 45 89 84 100 
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 4
POSTORDER:
22 32 23 45 56 67 43 84 100 89 75 
1.create 
2.inorder 
3.preorder 
4.postorder 
5.exit
Enter your choice: 5

*/
