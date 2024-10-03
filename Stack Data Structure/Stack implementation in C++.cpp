/* Stack implementation in C++ */

#include <iostream>

using namespace std;

#define MAX 10

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};

// Initialize an empty stack
void createEmptyStack(stack* s) {
  s->top = -1;
}

// Check if the stack is full
bool isFull(stack* s) {
  return s->top == MAX - 1;
}

// Check if the stack is empty
bool isEmpty(stack* s) {
  return s->top == -1;
}

// Add elements into stack
void push(stack* s, int newItem) {
  if (isFull(s)) {
    cout << "STACK FULL\n";
  } else {
    s->top++;
    s->items[s->top] = newItem;
  }
}

// Remove element from stack
void pop(stack* s) {
  if (isEmpty(s)) {
    cout << "STACK EMPTY\n";
  } else {
    cout << "Item popped = " << s->items[s->top] << endl;
    s->top--;
  }
}

// Print elements of stack
void printStack(stack* s) {
  cout << "Stack: ";
  for (int i = 0; i <= s->top; i++) {
    cout << s->items[i] << " ";
  }
  cout << endl;
}

// Driver code
int main() {
  stack* s = new stack;

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  cout << "After popping out\n";
  printStack(s);

  // Free dynamically allocated memory
  delete s;

  return 0;
}