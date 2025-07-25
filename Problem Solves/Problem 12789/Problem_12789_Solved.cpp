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
	int Peek() {
		if (near == nullptr) {
			return -1;
		}
		Node* node = near;
		return node->GetNum();
	}
	void ShowStack(){
		Node* node = near;
		cout << "Near";
		if (node == nullptr) { cout << std::endl; return; }
		while (node != front) {
			cout << " <= " << node->GetNum();
			node = node->GetPrev();
		}
		cout << " <= " << front->GetNum() << " <= Front" << std::endl;
	}
};


int main() {
	Stack s;
	int n, now = 1;
	bool test = true;
	cin >> n;
	while (n--) {
		int index;
		cin >> index;
		if (index == now) now++;
		else if (s.Peek() == -1) s.Push(index);
		else {
			while (s.Peek() != -1) {
				if (s.Peek() == now) {
					s.Pop();
					now++;
				}
				else{
					s.Push(index);
					break;
				}
			}
			if (s.Peek() == -1) 
				if(index == now) now++;
				else s.Push(index);
		}
	}

	while (s.Peek() != -1) {
		if (s.Pop() == now) now++;
		else {
			test = false;
			break;
		}

	}
	cout << (test ? "Nice" : "Sad");
	
	return 0;
}
