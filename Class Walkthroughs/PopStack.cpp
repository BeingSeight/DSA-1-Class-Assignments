// Pop Stack without class

#include <iostream>
using namespace std;

#define MAX 1000

int st[MAX];
int top = -1;

void push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow\n";
    } else {
        st[++top] = x;
        cout << x << " pushed into stack\n";
    }
}

int pop() {
    if (top < 0) {
        cout << "Stack Underflow\n";
        return 0;
    } else {
        int x = st[top--];
        return x;
    }
}

int peek() {
    if (top < 0) {
        cout << "Stack is Empty\n";
        return 0;
    } else {
        return st[top];
    }
}

bool isEmpty() {
    return (top < 0);
}

void display() {
    if (top == -1) {
        cout << "Stack is empty, STACK UNDERFLOW\n";
    } else {
        for (int i = top; i >= 0; i--) {
            cout << st[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n ***** MAIN MENU *****";
        cout << "\n 1. PUSH";
        cout << "\n 2. POP";
        cout << "\n 3. PEEK";
        cout << "\n 4. DISPLAY";
        cout << "\n 5. EXIT";
        cout << "\n Enter your option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to be pushed: ";
                cin >> value;
                push(value);
                break;
            case 2:
                cout << "Popped value: " << pop() << endl;
                break;
            case 3:
                cout << "Top value: " << peek() << endl;
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice, please try again.\n";
        }
    }
    return 0;
}