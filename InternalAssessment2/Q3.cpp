#include <iostream>
using namespace std;
#define SIZE 5

class CircularQueue {
    int arr[SIZE], front, rear;

public:
    CircularQueue() { front = -1; rear = -1; }

    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is full!\n";
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Dequeued: " << arr[front] << "\n";
        if (front == rear) front = rear = -1; // Reset queue
        else front = (front + 1) % SIZE;
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % SIZE;
        } while (i != (rear + 1) % SIZE);
        cout << "\n";
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.display();
    cq.dequeue();
    cq.display();
    return 0;
}
