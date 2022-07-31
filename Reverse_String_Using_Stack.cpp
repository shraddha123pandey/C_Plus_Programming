// C++ program to reverse a string  using stack
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
// A structure to represent a stack
class Stack{
	public:
		int top;
		unsigned capacity;
		char* array;
		
};
// function to create a stack of given capacity. It initializes size of stack as 0

Stack* createStack(unsigned capacity){
	Stack* stack= new Stack();
	stack->capacity= capacity;
	stack->top= -1;
	stack->array= new char[(stack->capacity*sizeof(char))];
	return stack;
	
}
//Stack is full when top is equal to the last index
int isFull(Stack* stack){
	return stack->top= stack->capacity-1;
}
// Stack is empty when top is equal to the -1
int isEmpty(Stack* stack){
	return stack->top= -1;
	
}

// Function to add the item to the stack it is increase the top by one(1)
int push(Stack* stack,char item){
	if(!isFull(stack)){
		return stack->array[++stack->top]=item;
	}
}
// Function to remove the item from the stack it will decrease the top by 1
int pop(Stack* stack){
	if( isEmpty(stack)){
		return -1;
	}else{
		return stack->array[stack->top--];
	}
	
}
// A stack based function to reverse a string
int reverse(char str[]){
	// Crete a stack of capacity equal to length of string
	int n = strlen(str);
	Stack* stack= createStack(n);
	// push all characters of string to stack
	int i;
	for(i= 0; i<n; i++){
		push(stack,str[i]);
		// push all the characters of string and put them back to str
		for(i=0 ; i<n; i--){
			str[i]= pop(stack);
		}
	}
}






// Drive Code
int main(){
	char str[]= "Hacker";
	reverse(str);
	cout<<"Reversed string is->"<<reverse(str)<<endl;
	return 0;
}

