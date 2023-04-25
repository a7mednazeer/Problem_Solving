#include <iostream>
using namespace std;

    struct Node {
        int data;
        Node * next;
    };

    Node * newNode(int data) {
        Node * temp = new Node;
        temp->next = temp;
        temp->data = data;
        return temp;
    }
    Node * head;
    Node * tail;
    
    
    void Persons(int n) {
        head = newNode(1);
        tail = head;
        for (int i = 2; i <= n; i++) {
            tail->next = newNode(i);
            tail = tail->next;
        }
        tail->next = head;
    }

    void Elimination(int x) {
        Node * ptr1 = head;
        Node * ptr2 = head;
        
        while (ptr1->next != ptr1) {
            int count = 1;
            while (count != x) {
                ptr2 = ptr1;
                ptr1 = ptr1->next;
                count++;
            }
            cout<<"\n- Person eliminated is: "<< ptr1->data;
            ptr2->next = ptr1->next;
            ptr1 = ptr2->next;
        }
        cout<<"\n\n=====> LAST PERSON IS: "<< ptr1->data << '\n';
    }


main() {
    int n;
    int x;
    cout<<"Enter the number of Persons:"<< '\n'; cin>>n;
    cout<<"Enter the number of skip:"<< '\n'; cin>>x;
    Persons(n);
    Elimination(x+1);
}

