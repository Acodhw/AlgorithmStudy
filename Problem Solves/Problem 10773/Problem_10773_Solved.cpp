#include <iostream>
using std::cout;
using std::cin;

class Node {
	int num;
	Node* prev;
public:
	Node(int n) { num = n; prev = nullptr; }
	void LinkPrev(Node* n) { prev = n; }
	Node* GetPrev() { return prev; };
	int GetNum() { return num; }
};

class Stack {
	Node* front;
	Node* near;
public:
	Stack() {
		front = nullptr;
		near = nullptr;
	}
	void Push(int n) {
		Node* node = new Node(n);
		node->LinkPrev(near);
		near = node;
		if (front == nullptr) front = near;
	}
	int Pop(){
		if (near == nullptr) {
			return -1;
		}
		Node* node = near;
		int n = node->GetNum();
		near = node->GetPrev();
		if (near == nullptr) front = nullptr;
		delete node;
		return n;
	}
	int Peap() {
		if (near == nullptr) {
			return -1;
		}
		Node* node = near;
		return node->GetNum();
	}
};



int main() {
	Stack s;
	int n;
	cin >> n;
	while (n--) {
		int in;
		cin >> in;
		if (in == 0)
			s.Pop();
		else
			s.Push(in);
	}
	int res = 0;
	while (s.Peap() != -1) 
		res += s.Pop();
	
	cout << res;
	return 0;
}