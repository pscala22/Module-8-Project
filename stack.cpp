#include "stack.h"
#include <iostream>
using namespace std;

/*****************************************************************************************************
Function Name: stack
Preconditon: The state has not been initialized for the list.
Postcondition:The state of the class is initialized. Front and Back = 0.
Description: For the default constructor, sets both pointers to 0.
*******************************************************************************************************/
stack::stack() : top(nullptr)
{}

/*****************************************************************************************************
Function Name: ~stack
Preconditon: The state of the list was previously initialized.
Postcondition: All memory is deallocated from the current object.
Description: The destructor deallocates memory from the current object.
*******************************************************************************************************/
stack::~stack()
{
while(top != nullptr)
{
node *temp = top;
top = top->next;
delete temp;
}
}

/*****************************************************************************************************
Function Name: push
Preconditon: The state of the list was previously initialized.
Postcondition: All memory is deallocated from the current object.
Description: pushes data to newly created node
*******************************************************************************************************/
void stack:: push(int data)
{
node *n = new node;
n->data = data;
n->next = top;
top = n;
}

/*****************************************************************************************************
Function Name: pop
Preconditon: Stack is Not Empty
Postcondition: Removes Data from Stack
Description: The pop function moves data into temp file and then deletes the temp file returning empty data
*******************************************************************************************************/
int stack:: pop()
{
if(top != nullptr)
{
node *temp = top;
top = top->next;
int data = temp->data;
delete temp;
return data;
}
else
return -99999;
}

/*****************************************************************************************************
Function Name: is emply
Preconditon: The state of the list was previously initialized.
Postcondition: Return a nullptr
Description: The is_empty funtion returns a null pointer
*******************************************************************************************************/
bool stack:: is_empty()
{
return top == nullptr;
}