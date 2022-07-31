#include <iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;

//Function to check if queue is empty or not
bool isEmpty()
{
 if(front == -1 && rear == -1)
 	return true;
 else
 	return false;
}
bool isFull(){
	if ((rear + 1)%SIZE == front){
		return true;
	}else{
		return false;
	}
}

//Insertion of element in queue
void enqueue ( int value )
{
 //queue is full
 if (isFull())
    cout<<"Queue is full"<<endl;
 else
 {
  if( front == -1) //for first element to be inserted
     front = 0;
 
  rear = (rear+1)%SIZE; //insert element at rear
  A[rear] = value;
 }
}

//delete/remove element from queue
void dequeue ( )
{
 if( isEmpty() )
  cout<<"Queue is empty"<<endl;
 else
 {
 	int val= A[front];
 	if( front == rear ) //only one element is present
  		front = rear = -1;
 	else
  		front = (front + 1)%SIZE;
  	cout<<"\n"<<val<<" is deleted"<<endl;
 }
}

//function to show the element at front
void showfront( )
{
 if( isEmpty())
 	cout<<"Queue is empty"<<endl;
 else
 	cout<<"element at front is: "<<A[front]<<endl;
}

//function to display queue
void displayQueue()
{
 	if(isEmpty())
  		cout<<"Queue is empty"<<endl;
 	else
 	{
		cout<<"\nThe Queue is: ";
  		int i;
  		if( front <= rear )
  		{
   			for( i=front ; i<= rear ; i++)
   				cout<<A[i]<<" ";
  		}
  		else
  		{
   			i=front;
   			while( i < SIZE)
   			{
   				cout<<A[i]<<" ";
   				i++;
   			}
   			i=0;
   			while( i <= rear)
   			{
   				cout<<A[i]<<" ";
   				i++;
   			}	
  		}
  		cout<<endl;
 	}
}


int main()
{
 int choice, flag=1, value;
 do 
 {
  	cout<<"\n1.Enqueue 2.Dequeue 3.ShowFront 4.DisplayQueue 5.Exit: ";
  	cin>>choice;
  	switch (choice)
  	{
  		case 1: cout<<"Enter Value: ";
          	cin>>value;
          	enqueue(value);
          	break;
  		case 2: dequeue();
          	break;
  		case 3: showfront();
          	break;
  		case 4: displayQueue();
          	break;
  		case 5: exit(0);
          	break;
  	}
 } while(choice!=5);
 return 0;
}

