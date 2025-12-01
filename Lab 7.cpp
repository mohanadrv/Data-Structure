#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyList {
public:
    Node* head;

    SinglyList() { head = nullptr; }

    void insert(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) head = newNode;
        else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    void remove(int value) {
        if (!head) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != value) temp = temp->next;
        if (temp->next) {
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

struct DNode {
    int data;
    DNode* next;
    DNode* prev;
};

class DoublyList {
public:
    DNode* head;
    DoublyList() { head = nullptr; }

    void insert(int value) {
        DNode* newNode = new DNode{value, nullptr, nullptr};
        if (!head) head = newNode;
        else {
            DNode* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void remove(int value) {
        if (!head) return;

        if (head->data == value) {
            DNode* temp = head;
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
            return;
        }

        DNode* temp = head;
        while (temp && temp->data != value) temp = temp->next;
        if (temp) {
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            delete temp;
        }
    }

    void display() {
        DNode* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

struct CNode {
    int data;
    CNode* next;
};

class CircularList {
public:
    CNode* head;
    CircularList() { head = nullptr; }

    void insert(int value) {
        CNode* newNode = new CNode{value, nullptr};
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            CNode* temp = head;
            while (temp->next != head) temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        if (!head) return;
        CNode* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    cout << "Singly Linked List: \n";
    SinglyList s;
    s.insert(1); s.insert(2); s.insert(3);
    s.display();
    s.remove(2);
    s.display();

    cout << "\nDoubly Linked List: \n";
    DoublyList d;
    d.insert(10); d.insert(20); d.insert(30);
    d.display();
    d.remove(20);
    d.display();

    cout << "\nCircular Linked List: \n";
    CircularList c;
    c.insert(5); c.insert(6); c.insert(7);
    c.display();

    return 0;
}
