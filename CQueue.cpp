#include "CQueue.h"

cqueue::cqueue(){
	front=-1;
	back=-1;
	max=10;
	queue=new double[max];
}

cqueue::cqueue(int max){
	front=-1;
	back=-1;
	this->max=max;
	queue=new double[max];
}

bool cqueue::full()
{
	return ((back+1)%max==front);
}

bool cqueue::empty()
{
	return (back==-1 && front==-1);
}

double cqueue::get_first()
{
	if(empty())
	{
		cout<<"\n The queue is empty.";
	}
	
	return queue[front];
}

double cqueue::get_last()
{
	if(empty())
	{
		cout<<"\n The queue is empty.";
	}
	
	return queue[back];
}

void cqueue::enqueue(double data)
{
	if(empty())
	{
		front=0;
		back=0;
		queue[back]=data;
	}
	else if(full())
	{
		cout<<"\n The queue is full.";
	}
	else
	{
		back=(back+1)%max;
		queue[back]=data;
	}
	
}

double cqueue::dequeue()
{
	double data;
	
	if (empty())
	{
		cout<<"\n The queue is empty.";
	}
	else if(front==back)
	{
		data=queue[front];
		back=-1;
		front=-1;
		
	}
	else
	{
		data=queue[front];
		front=(front+1)%max;
	}
	return data;
}
