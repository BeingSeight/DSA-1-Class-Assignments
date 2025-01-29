// Pop Stack without class

#include<iostream>
using namespace std;

const int MAX=5;
int st[MAX],top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main(){
    int val, option;
    do{
        cout<<"\n ***** MAIN MENU *****";
        cout<<"\n 1. PUSH";
        cout<<"\n 2. POP";
        cout<<"\n 3. PEEK";
        cout<<"\n 4. DISPLAY";
        cout<<"\n 5. EXIT";
        cout<<"\n Enter your option: ";
        cin>>option;

        switch(option)
        {
            case 1:
                cout<<"Enter the value to be pushed: ";
                cin>>val;
                push(st, val);
                break;
            case 2:
                val = pop(st);
                if (val != -1)
                    cout<<"The value popped is: "<<val;
                break;
            case 3:
                val = peek(st);
                if (val != -1)
                    cout<<"The value at the top is: "<<val;
                break;
            case 4:
                display(st);
                break;
        }
    } while(option != 5);
    return 0;
}

int pop(int st[])
{
    if (top == -1)
    {
        cout<<"Stack is empty, STACK UNDERFLOW";
        return -1;
    }
    else
    {
        int val = st[top];
        top--;
        return val;
    }
}

void push (int st[],int val)
{
    if (top == MAX-1)
    {
        cout<<"Stack is full, STACK OVERFLOW";
    }
    else {
        top ++;
        st[top]=val;
    }
}

int peek(int st[])
{
    if (top == -1)
    {
        cout<<"Stack is empty, STACK UNDERFLOW";
        return -1;
    }
    else
    {
        return st[top];
    }
}

void display(int st[])
{
    if (top == -1)
    {
        cout<<"Stack is empty, STACK UNDERFLOW";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout<<st[i]<<" ";
        }
    }
}