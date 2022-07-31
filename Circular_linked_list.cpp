# include<iostream>
using namespace std;
class Node{
	int key;
	int data;
	Node*next;
	Node(){
		key=0;
		data=0;
		next=NULL;
		
	}
	Node(int k, int d){
		key=k;
		data=d;
		
	}
};
class CircularLinkedList{
	public:
		Node* head;
	    CircularLinkedList(){
	    	head =NULL;
	    	
		}
		// 1. Check if node exists using key value
		Node* nodeExists(int k){
			Node * temp=NULL;
			Node *ptr=head;
			if(ptr==NULL){
				return temp;
			}else{
				do{
					if(ptr->key==k){
						temp=ptr;
					}
					ptr=ptr->next;
				}while(ptr!=head);
				return temp;
				
			}
		}
		// 2. Append  a node in circular linked list
		void appendNode(Node *new_node){
			if(nodeExists(new_node->key!=NULL)){
				cout<<"Node Already exists with key value:"<<new_node->key<<".Append another node with different key value"<<endl;
				
				
			}else{
				Node* ptr=head;
				while(ptr->next!=head){
					ptr=ptr->next;
				}
				ptr->next=new_node;
				new_node->next=head;
				cout<<"Node Appended "<<endl;
			}
		}
		// 3. Prepend Node- Attach a node at the start
		void prependNode(Node * new_node){
			void appendNode(Node *new_node){
			if(nodeExists(new_node->key!=NULL)){
				cout<<"Node Already exists with key value:"<<new_node->key<<".Append another node with different key value"<<endl;
				
				
			}else{
				Node *ptr=head;
				while(ptr->next!=head){
					ptr=ptr->next;
					
				}
				ptr->next=new_node;
				new_node->next=head;
				head= new_node;
				cout<<"Node prepended"<<endl;
				
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
};

