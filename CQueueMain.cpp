
#include"CQueue.h"

void print(cqueue);

int main()
{
	//lv
	cqueue cq1;
	cqueue cq2(3);
	double data;
	
	//code
	cq1.enqueue(1.25);
	cq1.enqueue(2.34);
	
	cout<<"Enter data to queue: ";
	cin>>data;
	cq1.enqueue(data);
	
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Data to queue: ";
		cin>>data;
		cq2.enqueue(data);
	}
	cout<<"CQ1: \n"<<endl;
	print(cq1);
	cout<<"\n---------------------------------\n";
	cout<<"CQ2: \n"<<endl;
	print(cq2);
	
	
	return 0;
}

void print(cqueue cq)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	while (!cq.empty())
	{
	cout<<cq.dequeue()<<endl;
	}
}
