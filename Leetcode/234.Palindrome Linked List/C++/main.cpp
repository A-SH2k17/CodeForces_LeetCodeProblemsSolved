#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next; 
};
class linkedlist{
    public:
        node* head = NULL;
        void insertEnd(int data){
            node* newnode = new node;
            newnode ->data = data;
            newnode ->next = NULL;
            if(head == NULL){
                head = newnode;
            }
            else{
                node* current = head;
                while(current->next != NULL)
                    current = current -> next;
                current ->next = newnode;
            }
        }

        void display(){
            if(head==NULL)
                cout<<"this list is empty\n";
            else{
                node* current = head;
                while(current != NULL){
                    cout<<current->data<<"\t";
                    current = current ->next;
                }
            }
        }
};
int main(){
    linkedlist listone,listtwo;
    listone.display();
    listone.insertEnd(10);
    listone.insertEnd(29);
    listone.display();
    listtwo.display();
    return 0;
}