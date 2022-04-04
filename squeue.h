#ifndef SQUEUE_H
#define SQUEUE_H

#include "stack.h"

class squeue {

public:
squeue();
~squeue();
squeue(squeue& );
void enqueue(int);
void dequeue();
void print();

private:
stack s1, s2;
};

#endif