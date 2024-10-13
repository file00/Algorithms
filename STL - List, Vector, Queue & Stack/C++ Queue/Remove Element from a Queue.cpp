/* Remove Element from a Queue */
#include <iostream>
#include <queue>
using namespace std;

// function prototype for display_queue utility
void display_queue(queue<string> q);

int main() {

  // create a queue of string
  queue<string> animals;

  // push element into the queue
  animals.push("Cat");
  animals.push("Dog");
  animals.push("Fox");
  
  cout << "Initial Queue: ";
  display_queue(animals);
  
  // remove element from queue
  animals.pop();
  
  cout << "Final Queue: ";
  display_queue(animals);
  
  return 0;
}

// utility function to display queue
void display_queue(queue<string> q) {
  while(!q.empty()) {
    cout << q.front() << ", ";
    q.pop();
  }

  cout << endl;
}