#ifndef STACK_H
#define STACK_H

struct node
{
int data;
node *next;
};

class stack
{
public:
stack(); 
~stack();
void push(int data);
int pop();
bool is_empty();

private:
node *top; 
};

#endif