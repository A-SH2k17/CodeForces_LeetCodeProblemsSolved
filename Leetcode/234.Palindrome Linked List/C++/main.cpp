//Important note everytime data is written replace it with val in leetcode cuz data is not defined there

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


        /*solution 1 for palindrome:
        runtime: 278 ms
        memory usage 5.13
        */
        bool isPalindrome(node* head) {
        vector<int>arr;
        vector<int>arr2;
        node* current = head;
        while(current){
            arr.push_back(current->data);
            arr2.push_back(current->data);
            current = current -> next;
        }
        
        reverse(arr2.begin(),arr2.end());
        return arr == arr2;
    }

    /*
    other solution:
    time complexity: O(n)
    space complexity: O(1)
    */

   bool isPal(node *head){
    node* slow = head,*fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow ->next;
        fast = fast -> next ->next;
    }
    node* h2 = reverse_list(slow->next),*h1 = head;
    slow->next=NULL;
    while(h1 != NULL && h2 != NULL){
        if(h1->data != h2->data)
            return false;
        h1 = h1->next;
        h2= h2 -> next;
    }
    return true;
   }
private:
    node* reverse_list(node* list_head){
        node* prev = NULL,*current=list_head,*next = NULL;
        while(current){
            next = current ->next;
            current->next = prev;
            prev=current;
            current = next;
        }
        list_head = prev;
        return list_head;
    }
};
int main(){
    linkedlist list1,list2,list3,list4;
    list1.insertEnd(1);
    list1.insertEnd(2);
    if(list1.isPal(list1.head))
        cout<<"true\n";
    else
        cout<<"false\n";

    list2.insertEnd(1);
    list2.insertEnd(2);
    list2.insertEnd(1);
    if(list2.isPal(list2.head))
        cout<<"true\n";
    else
        cout<<"false\n";

    list3.insertEnd(1);
    list3.insertEnd(3);
    list3.insertEnd(2);
    list3.insertEnd(1);
    if(list3.isPal(list3.head))
        cout<<"true\n";
    else
        cout<<"false\n";

    list4.insertEnd(1);
    list4.insertEnd(3);
    list4.insertEnd(3);
    list4.insertEnd(3);
    list4.insertEnd(3);
    list4.insertEnd(1);
    if(list4.isPal(list4.head))
        cout<<"true\n";
    else
        cout<<"false\n";

    return 0;


}