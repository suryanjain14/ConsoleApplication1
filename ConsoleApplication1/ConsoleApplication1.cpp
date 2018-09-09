// ConsoleApplication1.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include<iostream>
#include<conio.h>
#define n 5

using namespace std;

class cqueue
{
	int a[n], i, j, k;
	int rear, front;
public:
	cqueue()
	{
		front = -1;
		rear = -1;
	}
	void add(int num);
	void del();
	void display();
};

void cqueue::add(int num)
{
	if(rear==n-1&&front==0||rear!=-1&&rear==front&&rear!=0)
	{
		cout << "The queue is full" << endl;
	}
	else if (rear ==-1) 
	{
		front = rear = 0;
		a[rear] = num;
	}

	else if (rear == n - 1 && front != 0)
	{
		cout << rear << endl;
		rear = 0;
		cout << rear << endl;

		a[rear] = num;
	}

	else
	{
		rear++;
		a[rear] = num;
	}
}


void cqueue::del()
{
	if (front == -1 || front == rear)
	{
		cout << "The queue is empty"<<endl;
		front = rear = -1;
	}
	else
	{
		if(rear>front)
		{
			a[front] = 0;
			front++;
		}
		else
		{
			if (front == n - 1)
			{
				a[front] = 0;
				front = 0;
			}
			else 
{
				a[front] = 0;
				front++;
			}
		}
	}
}

void cqueue::display()
{
	if (rear == -1 || front == rear&&rear!=0)
	{
		cout << "The queue is empty" << endl;
	
	}
	else
	{
		if (front < rear)
		{
			for (int temp = front; temp <= rear; temp++)
			{
			
				cout << a[temp]<<endl;
			}
		}
		else
		{
			for(int temp=front;temp<n;temp++)
			{
				cout << a[temp] << endl;
			}
			for (int temp = 0;temp<=rear;temp++)
			{
				cout << a[temp] << endl;
			}
		}


	}
}


int main()
{
	cqueue obj;
	int j = 0;

	while (j!=4)
	{
		cout << "\n1 add \n2 del \n3 display \n4 exit  " << endl;
		cin >> j;
		cout << endl;
		switch (j)
		{
		case(1):
		    cout << "Enter you want to add" << endl;
			int num;
			cin >> num;
			obj.add(num);
			break;
		case(2):
			obj.del();
			break;
		case(3):
			obj.display();
			break;
		case(4):
			break;
		default:
			cout<<"worng entry"<<endl;
			break;
		}
	}

    return 0;
}

