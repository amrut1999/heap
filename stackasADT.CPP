#include <iostream>
using namespace std;

struct Node { int data; Node* next; };

class Stack {
    Node* top = nullptr;
public:
    void Push(int x) { top = new Node{x, top}; }
    void Pop() { if(top){ Node* t=top; top=top->next; cout<<t->data<<" popped\n"; delete t;} }
    void Peek() { if(top) cout<<"Top: "<<top->data<<endl; else cout<<"Empty\n"; }
    bool IsEmpty() { return !top; }
    void Display() { for(Node* t=top; t; t=t->next) cout<<t->data<<" "; cout<<endl; }
};

int main() {
    Stack s;
    s.Push(10); s.Push(20); s.Push(30);
    s.Display();        // 30 20 10
    s.Peek();           // Top: 30
    s.Pop();            // 30 popped
    s.Display();        // 20 10
    cout<<(s.IsEmpty()?"Empty\n":"Not Empty\n"); // Not Empty
}
