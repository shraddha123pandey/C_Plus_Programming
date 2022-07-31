// Circular queue is a similar to linear queue as it is also based on fifo principle except that the last position is connected to the first position in a
// circular queue that forms a circle. it is also known as a ring buffer.
/* C++ program implementation basic circular Queue operations */
# include <iostream>
using namespace std;
# define size 5
int queue[size];
//Linear Queue Data Structure
int front=-1;
int rear = -1;
// function for enqueue  the elements
int Enqueue(){
	int item;
	cout<<"Enqueu the value in the queue->"<<endl;
	cin>>item;
	if (front ==rear== -1)// condition to check queue is empty or not
	{
		cout<<"Queue is underflow::"<<endl;
	}else if((rear+1)%size==front){
		cout<<"Queue is overflow::"<<endl;
		
	}else{
		rear= (rear+1)%size; //rear is incremented
		queue[rear]= item; // assigning a value to the queue at the rear position
		
		
	}
	queue[rear]=item;
}
// function for dequeue the elements
int Dequeue(){
		int y;
	if(front==rear==-1){
		cout<<"The condition is underflow::"<<endl;
	}else{
		y = queue[front];
		if(front==rear){
			cout<<"The dequeued element is::"<<y<<endl;
			front=rear=-1;
		}else{
			cout<<"The Dequeued element is->"<<y<<endl;
			
			front = (front+1)%size;
		}
		return y;
		
	}
}
int Display(){
	int i = front;
	if(front==-1&& rear==-1){
		cout<<"The condition is Empty"<<endl;
	}else{
		cout<<"The Elements in a Queue are:"<<endl;
		
	}
}
 
int main()
{

	
	Enqueue();
	Enqueue();
	Enqueue();
	Enqueue();
//	Display();
	Dequeue();
//	Display();
	delete queue;
	return 0;
	
	
}



