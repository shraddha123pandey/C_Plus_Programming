/* C++ program implementation basic Queue operations */
# include <iostream>
using namespace std;
# define size 5
int queue[size];
//Linear Queue Data Structure
int front=-1;
int rear = -1;

int Enqueue(){
	int item;
	cout<<"Enqueu the value in the queue->"<<endl;
	cin>>item;
	if(front==-1&& rear==-1)// Condition to check queue is empty
	{
		front =0;
		rear =0;		
	}else if(rear==size-1){
		cout<<"The condition is overflow::"<<endl;
	}else{
		rear= rear+1;
		
	}
	queue[rear]=item;
} 
int Dequeue(){
	int y;
	if(front==rear==-1){
		cout<<"The condition is underflow::"<<endl;
	}else{
		y = queue[front];
		if(front==rear){
			front=rear=-1;
		}else{
			cout<<"The Dequeued value is->"<<y<<endl;
			
			front = front+1;
		}
		return y;
		
	}
}
int Display(){
	if(rear==front==-1){
		cout<<"The Queue is Empty::"<<endl;
	}else{
		cout<<"The Elements that are present in the Queue is->"<<endl;
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<endl;
		}
	}
}

int main()
{

	
	Enqueue();
	Enqueue();
	Enqueue();
	Enqueue();
	Display();
	Dequeue();
	Display();
	delete queue;
	return 0;
	
	
}







