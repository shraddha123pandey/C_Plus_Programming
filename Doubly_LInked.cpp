// Doubly linked list
#include<iostream>
using namespace std;
// A linked list node
class Node{
	public:
		int key;
		int data;
		Node* next;
		Node* previous;
		Node(){
			key= 0;
			data=0;
			next=NULL;
			previous=NULL;
				
		}
		Node(int k, int d){
			key=k;
			data=d;
		}
		
};
class DoublyLinkList{
	public:
		Node* head;
		DoublyLinkList(){
			head=NULL;
		}
		DoublyLinkList(Node* n){
			head=n;
		}
		
		// 1. Check if node exists using key value
		Node* checkIfNodeExists(int k){
			Node* temp= NULL;
			Node* ptr=head;
			
			
			while(ptr!=NULL){
				if(ptr->key==k){
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;	
		}
		
		// 2. Append a node to the list
		
		void appendNode(Node* n){
			if(checkIfNodeExists(n->key)!=NULL){
				cout<<"Node Already Exists withe the key value:"<<n->key<<".Append another node with differen key value:"<<endl;
				
			}
			else{
					Node*ptr=head;
					if(head==NULL){
						head=n;
						cout<<"Node Appended as Head Node:"<<endl;
					}else{
						Node *ptr= head;
						while(ptr->next!=NULL){
							ptr= ptr->next;
						}
						ptr->next=n;
						n->previous=ptr;
						cout<<"Node Appended"<<endl;
					}
			}
			
		}
		// 3. prepend Node-Attach a node at the start
		void prependNode(Node *n){
		if(checkIfNodeExists(n->key)!=NULL){
				cout<<"Node Already Exists withe the key value:"<<n->key<<".Append another node with differen key value:"<<endl;
				
			}
			else{
				if(head==NULL){
						head=n;
						cout<<"Node prepended as Head Node:"<<endl;
					}else{
					
					head->previous=n;
					n->next= head;
					head=n;
					cout<<"Node prepended"<<endl;
				}
			}
		}
		// 4. Insert a Node after the particular Node in the list
		
		void insertNodeAfter(int k,Node *n){
			Node*ptr = checkIfNodeExists(k);
			if(ptr==NULL){
				cout<<"No node exists with the same key value:"<<k<<endl;
				
			}else{
				if(checkIfNodeExists(n->key)!=NULL){
					cout<<"Node Already exists with the key value"<<n->key<<".Append another node with differen key value"<<endl;
				}else{
					Node *nextNode= ptr->next;
					// inserting at the end
					if(nextNode==NULL){
						ptr->next=n;
						n->previous=ptr;
						cout<<"Node Inserted at the END"<<endl;
						
					}
					// Inserting in between
					else{
						n->next=nextNode;
						nextNode->previous=n;
						n->previous=ptr;
						ptr->next =n;
						cout<<"Node inserted in between"<<endl;
						
					}
				}
			}
		}
		
		// 5.Delete node by unique key. Basically De-link not delete
		void deleteNodebykey(int k){
				Node*ptr = checkIfNodeExists(k);
			if(ptr==NULL){
				cout<<"No node exists with the same key value:"<<k<<endl;
				
			}else{
				if(head->key==k){
					head= head->next;
					cout<<"Node unlinked with keys value:"<<k<<endl;
					
				}else{
					Node *nextNode=ptr->next;
					Node *prevNode= ptr->previous;
					// deleting at the end
					if(nextNode==NULL){
						prevNode->next= nextNode;
						nextNode->previous= prevNode;
						cout<<"Node Deleted in Between"<<endl;
					}
					
				}
			}
		}
		// 6. Update Node
		void updateNodebykey(int k, int d){
			Node*ptr = checkIfNodeExists(k);
			if(ptr!=NULL){
				ptr->data =d;
				cout<<"Node Update Successfully"<<endl;
			}else{
				cout<<"Node Doesn't exist with key value:"<<k<<endl;
			}
		}
		//7. printing
		void printList(){
			if(head==NULL){
				cout<<"No Node in Doubly linked list"<<endl;
				
			}else{
				cout<<endl<<"Doubly linked value";
				Node *temp =head;
				while(temp!=NULL){
					cout<<"("<<temp->key<<","<<temp->data<<") <-->";
					temp = temp->next;
				}
				
			}
		}
		
		
};


int main(){
	DoublyLinkList obj;
	int option;
	int key1,k1,data1;
	do{
		cout<<"What operation do you want to perform? Select Option Number.Enter 0 to exist."<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. insertNode()"<<endl;
		cout<<"4. deleteNode()"<<endl;
		cout<<"5. updateNode()"<<endl;
		cout<<"6. printNode()"<<endl;
		cout<<"7. Clear Screen"<<endl;
		cout<<"Select the option->";
		cin>>option;
		Node* n1= new Node();
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Append Node Operation \n Enter key & data of the Node to be appended->"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data= data1;
				obj.appendNode(n1);
				break;
			case 2:
				cout<<"prepend Node Operation \n Enter key & data of the Node to be prepended->"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data= data1;
				obj.prependNode(n1);
				break;
			case 3:
				cout<<"Insert Node Operation \n Enter key & data of the Node to be inserted->"<<endl;
				cin>>k1;
				cout<<"Enter the key and data of the new node first:"<<endl;
				n1->key=key1;
				n1->data= data1;
				obj.insertNodeAfter(k1,n1);
				break;
			case 4:
				cout<<"Delete Node by key operation = \n Enter the key & New data to be deleted->"<<endl;
				cin>>k1;
				obj.deleteNodebykey(k1);
				break;
			case 5:
				cout<<"Update Node by key operation = \n Enter the key & New data to be updated"<<endl;
				cin>>key1;
				cin>>data1;
				obj.updateNodebykey(key1,data1);
				break;
			case 6:
				obj.printList();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter Proper Operation number->"<<endl;
		}
		
		
	}while(option!=0);
	return 0;
}
