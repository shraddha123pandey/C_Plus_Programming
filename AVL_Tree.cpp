// C++ program to insert a node 
# include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int *key;
		int *left;
		int *right;
		int * height;
		
};

// A utility function to get maximum of two integer 

int max(int a, int b);

//  A Urility function to get maximum of two integers 

int height(Node *N){
	if(N==NULL){
		return 0;
	}else{
		return N->height;
	}
	
}
int max(int a, int b){
	return (a>b)?a:b;
}

/*  Helper function that allocates a new node with the given key as NULL left and right pointers*/

Node *newNode(int key)
{
	Node *node= new Node();
	node->key=key;
	node->left= NULL;
	node->right= NULL;
	node->height= 1;
	return(node);
}

// A utility function to right rotate subtree rooted with see the diagram given above;

Node *rightRotate(Node *y){
	Node *x= y->left;
	
}
