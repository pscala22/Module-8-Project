/********************************************************************************************
Name: Paul Scala	Z#:23561522
Course: Date Structures and Algorithm Analysis (COP3530) Professor: Dr. Lofton Bullard
Due Date:067/07/2021	Due Time: 11:59PM
Total Points: 100 Assignment 8: Queues
*********************************************************************************************/
#include<iostream>
#include "squeue.h"
#include "stack.h"
using namespace std;
int main()
{
squeue k;
k.enqueue(60);
k.print();
k.enqueue(20);
k.enqueue(30);
k.print();
k.enqueue(10);
k.print();
k.enqueue(50);
k.enqueue(40);
k.print();
squeue j =k; j.dequeue();
j.print();
j.dequeue();
j.dequeue();
j.dequeue();
j.print();
j.dequeue();
j.dequeue();
j.print();
j.dequeue();
j.dequeue();
return 0;
}