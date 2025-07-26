#include <iostream>
using std::cout;
using std::cin;

class Node {
	int num;
	Node* next;
public:
	Node(int n, Node * next = nullptr) { num = n; this->next = next; }
	friend class Queue;
};

class Queue{
	Node* head;
	Node* near;
public:
	Queue() : head(nullptr), near(nullptr) {}

	void Push(int n) {
		Node* node = new Node(n);
		if (near == nullptr) {
			head = node;
			near = node;
			return;
		}
		near->next = node;
		near = node;
	}

	int Dequeue() {
		if (head == nullptr) {
			return -1;
		}
		int n = head->num;		
		Node* node = head;
		if (head == near) {
			head = nullptr;
			near = nullptr;
			delete node;
			return n;
		}
		else {
			head = head->next;
			delete node;
		}
		return n;
	}

	int Peek() {
		if (head == nullptr) {
			return -1;
		}
		int n = head->num;
		return n;
	}
};


int main() {
	Queue q;
	int n, k, index = 0;
	cin >> n >> k;
	int * arr = new int[n];

	for (int i = 0; i < n; i++) {
		q.Push(i + 1);
	}

	while (q.Peek() != -1) {
		for (int i = 1; i < k; i++) {
			q.Push(q.Dequeue());
		}
		arr[index] = q.Dequeue();
		index++;
	}

	cout << "<";
	for (int i = 0; i < n - 1; i++)
		cout << arr[i] << ", ";
	cout << arr[n - 1] << ">";

	delete[] arr;
	return 0;
}