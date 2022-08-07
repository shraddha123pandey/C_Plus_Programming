 /* Binary SEARCH 
 
 void insertNode(new_node) 
 {
  If root = NULL then -> root = new_node
  else
  set temp =root
  while temp != NULL 
  If new_node.value == temp.value
  then -> return // no duplicate allowed
*/

#include <iostream>
# define GLOBALSPACE 10

using namespace std;
class TreeNode{
	public:
		int value;
		TreeNode *left;
		TreeNode *right;
		TreeNode(){
			value=0;
			left =NULL;
			right = NULL;
			
		}
		TreeNode(int v){
			value=v;
			left =NULL;
			right = NULL;
			
		}
};

class BST{
	public:
		TreeNode *root;
		bool isEmpty(){
			if(root==NULL){
				return true;
			}else{
				return false;
			}
		}
		
		void insertNode(TreeNode *new_node){
			if(root == NULL){
				root= new_node;
				cout<<"Value Inserted as root node!"<<endl;
			}else{
				TreeNode *temp= root;
				while(temp!=NULL){
					if(new_node->value= temp->value){
						cout<<"Value Already Exit,"<<"Insert another value!"<<endl;
						return ;
					}
					else if((new_node->value<temp->value)&&(temp->left==NULL)){
						cout<<"Value Already exist,"<<"Inserted another value!"<<endl;
						return ;
						
					}
					else if((new_node->value)&&(temp->left==NULL))	{
						temp->left= new_node;
						cout<<"Value Inserted !"<<endl;
						break;
					}
					else if((new_node->value>temp->value)&& (temp->right==NULL)){
						temp->right= new_node;
						
					}else{
						temp= temp->right;
					}
				}
			}
		}
		
		void print2D(TreeNode *r , int space){
		if(r==NULL){
			return ;
	
		space= space+GLOBALSPACE; // Increase distance between levels
		print2D(r->right, space); // Process right child first
		cout<<endl;
		for(int i= GLOBALSPACE ; i<space; i++){
		// Process right child first
			cout<<" ";	
		}	
		cout<<r->value <<"\n";
		print2D(r->left, 5);// Process left child
	}
}

		
		void printPreorder(TreeNode *r){
			if(r==NULL)
				return ;
			
			/* first print the data of the node*/
			cout<<r->value<<endl;
			/* then Return the left surface*/
			printPreorder(r->left);
			/* Return the right surface*/
			printPreorder(r->right);
			
		
		}
		void printInorder(TreeNode *r){
			if(r==NULL)
				return;
			/* First recur the left child*/
			printInorder(r->left);
			/* The print the data node*/
			cout<<r->value<<endl;
			/* Now recur the right child*/
			printInorder(r->right);
		}
			void printPostorder(TreeNode *r){
			if(r==NULL)
				return;
			/* First recur the left child*/
			printInorder(r->left);	
			/*  recur the right child*/
			printInorder(r->right);
			/* The print the data node*/
			cout<<r->value<<endl;
		}
		TreeNode * iterativeSearch(int val){
			if(root== NULL){
				return root;
				
			}else{
				TreeNode *temp= root;
				while(temp!= NULL){
					if(val== temp->value){
						return temp;
					}else if(val<temp->value){
						temp= temp->left;
						
					}else{
						temp= temp->right;
					}
				}
			}
			
			return NULL;
		}
		int height(TereNode *r){
			if(r==NULL){
				return -1;
			}else{
				/* Compute the height of the each subtree*/
				lheight= height(r->)
			}
		}
	
};






int main(){
	BST obj;
	int val;
	int option;
	do{
		cout<<"What operation do you want to perform?"<<"Select Option number. Enter 0 to exit."<<endl;
		cout<<"1. Insert node"<<endl;
		cout<<"2. Search Node"<<endl;
		cout<<"3. Delete Node "<<endl;
		cout<<"4. Print BST values"<<endl;
		cout<<"5. clear screen "<<endl;
		cout<<"0 to exit the program"<<endl;
		cin>>option;
		TreeNode *new_node = new TreeNode();
		switch(option){
		
			case 0:
				break;
			case 1:
				// insert node
				cout<<"Insert"<<endl;
				cout<<"Enter the value of tree node to insert in BST:";
				cin>>val;
				new_node->value= val;
				obj.insertNode(new_node);
				break;
			
			case 2:
				cout<<"Search"<<endl;
				new_node= obj.iterativeSearch(val);
				if(new_node!=NULL){
					cout<<"Value Found"<<endl;
				}else{
					cout<<"Value Not Found"<<endl;
				}
				break;
			case 3:
				cout<<"Delete Node"<<endl;
				break;
			case 4:
				cout<<"Print the bst class"<<endl;
				obj.print2D(obj.root,5);
				obj.printPreorder(obj.root);
				obj.printInorder(obj.root);
				obj.printPostorder(obj.root);
				break;
			case 5:
				break;
			default :
			cout<<"Invalid input"<<endl;	
				
		
	}
	}while(option!=0);
	return 0;
	
}


/* 


Pre-order(NLR) (node-left-right)
-Access the data part of the current node.
-Traverse the left subarray by recursively calling
-The preorder function

1) Preorder function(pseudocode)

1.) IF r==NULL then->return;
2.)Print r-value
3.) printPreorder(r->left)
4.)printPreorder(r->right)


===================In order=================

Inorder (LNR) left-node-Rigth

-Traverse the left surface by recursively calling the inorder function
-Access the data part of the current node.
-Traverse the right subtree by recursively calling the in-order-function
++Inorder function

void printInorder(TreeNode *r)

1.) If r== NULL then->return;
2.)printInorder(r->left)
3.)print r->value
4.) printInorder(r-right)

==================Post order=====================

Post Order(LRN)
-Traverse the left subtree by recursively calling the post-order function
-Traverse the right subtree by recursively calling the post-order function
-Access the data part of the current node.
void Postorder(TreeNode *r)
1.)If r==NULL
then->return;
2.)printPostorder(r-left);
3.) printPostorder(r->right);
4.)print r->value

================Print 2 Dimension==============

void print2D (TreeNode *r)
1.) if r==NULL then return;
2.)space = space+GLOBALSPACE;
3.)print2D(r->right,space);
4.)Next
5.)for i= GLOBALSPACE to i<space
print ("")
6.)print(r-value)+"\n";
7.)print2D(r-left, space);

=================Iterative Search==============

TreeNode * iterativeSearch(val);
1.) if root ==NULL , then->return root;
2.) else
2.1) set temp==root;
2.2)while temp!= NULl
2.2.1) if val== temp.value
2.2..1.1) then return temp;

2.2.2) else if val<temp.value
2.2.2.1) then-> temp = temp.left

2.2.3) else
2..2.3.1)temp = temp.right

2.3) return NULL

======================Height of the Binary tree===================
The Height of a binary tree is the number of edges between the tree's 
the tree's root and its furthest leaf

int height(TreeNode *r)

1.) if r==NULL
then -> return -1
2.) else
2.1) leftheight= height(r->left)
2.2) rightheight= height(r-right)
2.3) if(leftheight<rightheight)
then ->return (leftheight+1)
else
return return (rightheight+1)
*/
