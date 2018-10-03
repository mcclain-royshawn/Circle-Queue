#ifndef CQUEUE_H
#define CQUEUE_H
#include<iostream>
using namespace std;

class cqueue
{
	public:
		cqueue();
		cqueue(int);
		void enqueue(double);
		double dequeue();
		bool full();
		bool empty();
		double get_first();
		double get_last();	
	private:
		double* queue;
		int max,front,back;
};



#endif
