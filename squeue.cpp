#include "squeue.h"
#include <iostream>
using namespace std;


/*****************************************************************************************************
Function Name: squeue
Preconditon: The state has not been initialized for the list.
Postcondition:The state of the class is initialized. s1 and s2 as empty stacks.
Description: default constructor to create an empty queue by creating s1 and s2 as empty stacks.
*******************************************************************************************************/
squeue::squeue(){
}

/*****************************************************************************************************
Function Name: ~squeue
Preconditon: The state of the list was previously initialized.
Postcondition: All memory is deallocated from the current object.
Description: The destructor deallocates memory from the current object.
*******************************************************************************************************/
squeue::~squeue()
{
while(!s1.is_empty())
{
s1.pop();
}
}

/*****************************************************************************************************
Function Name: squeue
Preconditon: The state has not been initialized for the list.
Postcondition: s1 stack of r is empty
Description: For the copy constructor, the fuction copies elements and pushes them into the correct spot
*******************************************************************************************************/
squeue::squeue(squeue& r)
{
while(!r.s1.is_empty())
{
int data = r.s1.pop();
s2.push(data);
r.s2.push(data);
}

while(!r.s2.is_empty())
{
s1.push(s2.pop());
r.s1.push(r.s2.pop());
}
}

/*****************************************************************************************************
Function Name: enqueue
Preconditon: The state has not been initialized for the list.
Postcondition: new data at the end of the queue
Description: For the enqueue function, data is inserted at the end of the queue
*******************************************************************************************************/
void squeue:: enqueue(int data)
{
while(!s1.is_empty())
{
s2.push(s1.pop());
}

s1.push(data);
while(!s2.is_empty())
{
s1.push(s2.pop());
}
}

/*****************************************************************************************************
Function Name: dequeue
Preconditon: The state has not been initialized for the list.
Postcondition: removes first element in queue
Description: For the dequeue function, the front most element in the queue is removed
*******************************************************************************************************/
void squeue:: dequeue()
{
if(!s1.is_empty())
{
s1.pop();
}
}

/*****************************************************************************************************
Function Name: print
Preconditon: The state has not been initialized for the list.
Postcondition: queue is displayed on the screen
Description: For the print function, the queue is displayed to the screen
*******************************************************************************************************/
void squeue:: print()
{
cout << "Queue:"<<endl;
while(!s1.is_empty())
{
int data = s1.pop();
s2.push(data);
cout << data << endl;
}

while(!s2.is_empty())
{
s1.push(s2.pop());
}
}