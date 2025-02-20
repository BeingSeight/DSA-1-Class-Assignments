#include <iostream>
using namespace std;

struct student {
    char name[50];
    int age; 
    float marks;
};

int main() {
    student s;
    cout << "Enter name: ";
    cin.getline(s.name, 50);
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter marks: ";
    cin >> s.marks;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}