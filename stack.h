
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node/*if new node can be created succesfully*/){
    new_node->set_next(top); //set the new one to the previous top
    top=new_node;
    size++;
   }
   else cout<<"Not enough memory"<<endl;
}

int Stack::pop(){
        NodePtr t=top;
        if(t!=NULL){
            int value;
            value=t->get_value();
            top = t->get_next(); // move top to the next one and decrease the size
            --size;
            delete t;
            return value;
        }
        
    cout<<"Empty stack"<<endl;
    return -1;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
    top=NULL;
    size=0;//initialize stack
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"Clear the stack"<<endl;
    int n=size;
    while(n>0) {
        pop();
        n--;
    }
}
#endif
