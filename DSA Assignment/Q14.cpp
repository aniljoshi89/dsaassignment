#include<iostream>
#include<stack>
#include<queue>
using namespace std;
/*//enQueue -> o(n)
//deQueue -> o(1)
//peek -> o(1)
class Queue {
    public:
	stack<int> s1, s2;

	void enQueue(int x)
	{
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	int deQueue()
	{
		if (s1.empty()) {
			cout << "Q is Empty";
		}
		int x = s1.top();
		s1.pop();
		return x;
	}
    int peek(){
      if (s1.empty()) {
			cout << "Q is Empty";
		}
		int x = s1.top();
		return x;
    }
};


int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);

	cout << q.deQueue() <<endl;
    //cout<<q.peek()<<endl;
	cout << q.deQueue() <<endl;
	cout << q.deQueue() <<endl;

	return 0;
}*/
//enqueue -> o(1)
//dequeue -< o(n)
//peek -> o(n)
class Queue {
    public:
	stack<int> s1, s2;
	void enQueue(int x)
	{
		s1.push(x);
	}
	int deQueue()
	{
		if (s1.empty() && s2.empty()) {
			cout << "Q is empty";
			exit(0);
		}
		if (s2.empty()) {
			while (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}

		int x = s2.top();
		s2.pop();
		return x;
	}
    int peek(){
		if (s1.empty() && s2.empty()) {
			cout << "Q is empty";
            exit(0);
		}
		if (s2.empty()) {
			while (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}
		int x = s2.top();
		return x;
	
    }
};


int main()
{
	Queue q;
	q.enQueue(1);
    
	q.enQueue(2);
	q.enQueue(3);

	cout << q.deQueue() <<endl;
	cout << q.deQueue() <<endl;
	cout << q.deQueue() <<endl;

	return 0;
}
