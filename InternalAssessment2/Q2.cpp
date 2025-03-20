#include <iostream>
using namespace std;
#define SIZE 100

class Queue {
    int arr[SIZE], front, rear;
public:
    Queue() { front = -1; rear = -1; }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is full!\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Dequeued: " << arr[front++] << "\n";
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
