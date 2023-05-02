// Josephus Problem 
#include<iostream>
using namespace std;

int counter = 0;
int position;

struct Node {
    int data;
    Node * next;
    
};
Node * head = NULL;


void insert(int value, int position) {

        Node * newnode = new Node;
        newnode->data = value;
        newnode->next = NULL;
        if (head == NULL) {
            head = newnode;
            newnode->next = head;
            counter++;
            return;
        }
        
        if (position == 1) {
            newnode->next = head;
            Node * temp = head;
            while (temp->next != head) { 
                temp = temp->next;
            }
            temp->next = newnode;
            head = newnode;
            counter++;
            return;
        }
        Node * temp = head;
        for (int i = 1; i < position - 1 && temp->next != head; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        counter++;
     }

void remove(int skip) {
    Node * temp1 = head;
    Node * temp2 = head;
    
    while (temp1->next != temp1) {
        int count = 0;
        while (count != skip) {
            temp2 = temp1;
            temp1 = temp1->next;
            count++;
        }
        cout << "----------------> " << temp1->data << '\n';
        temp2->next = temp1->next;
        temp1 = temp2->next;
    }
    cout << "\nThe Last Node --> " << temp1->data << '\n';
}

main() {
    int value, position, nodes, skip;

    cout << "Enter the number of nodes you want to careate: ";
    cin >> nodes;

    while (counter != nodes) {
        for (int i = 1; i <= nodes; i++) {
            value = position = i;
            insert(value, position);
        }
    }

    cout << "Enter the number of nodes you want to skip: ";
    cin >> skip;
    cout << '\n';
    remove(skip);
    cout << '\n';
}

