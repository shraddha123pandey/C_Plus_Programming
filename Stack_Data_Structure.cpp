/* C++ program implementation basic Stack operations */
# include <iostream>
using namespace std;
# define size 5
int stack[size];
//Linear Queue Data Structure
int top=-1;


int push(){
	int item;
	cout<<"push the value in the stack->"<<endl;
	cin>>item;
	if(top==size-1)// Condition to check queue is empty
	{
		cout<<"Overflow condition"<<endl;
	}else{
		top= top+1;
		stack[top]=item;
		
	}
} 
int pop(){
	int x;
	if(top==-1){
		cout<<"Underflow condition"<<endl;
		
	}else{
		x= stack[top];
		top--;
		cout<<"The poped item is->"<<x<<endl;
	}
}
int peek(){
	if(top==-1){
		cout<<"The stack is empty"<<endl;
		
	}else{
		cout<<"The peek item is ->"<<stack[top]<<endl;
		
	}
}
int Display(){
	int i;
	cout<<"The present values in the stack is->"<<endl;
	for(i=top;i>=0;i--){
		cout<<stack[i]<<endl;
	}
}

int main()
{

	
	push();
	push();
	push();
	push();
	peek();
	Display();
	pop();
	Display();
	peek();
	delete stack;
	return 0;
	
	
}
