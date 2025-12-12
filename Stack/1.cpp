#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
public:
    char stack[SIZE];
    int top = -1;

    void push(char c) {
        if (top == SIZE - 1) {
            cout << "\nStack Overflow";
        } else {
            top++;
            stack[top] = c;
        }
    }
    char pop() {
        if (top == -1) 
        {
            cout << "\nStack Underflow";
            return '\0';
        } else {
            char c = stack[top];
            top--;
            return c;
        } }
};

int main() {
    char name[] = {'i','s','h','a','n'};
    Stack s;
   
    for (int i = 0; i < SIZE; i++) {
        s.push(name[i]);
    }
    cout << "\nName in Reverse: ";
    while (s.top != -1) {
        cout << s.pop();
    }

    return 0;
}