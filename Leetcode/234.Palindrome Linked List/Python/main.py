
class node:
    def __init__(self,data=None,next=None):
        self.data = data;
        self.next = next;

class linkedList:
    def __init__(self):
        self.head =None;
    
    def insert_node(self,data):
        new_node = node(data)

        if self.head == None:
            self.head = new_node
            return
        itr = self.head
        while(itr.next != None):
            itr = itr.next
        itr.next = new_node

    def display(self):
        itr = self.head
        if itr == None:
            print("the list is empty")
        else:
            while(itr):
                print(itr.data,end="->")
                itr = itr.next

            print()


#solution start here:
        
    def isPal(self):
        if self.head == None:
            return True
        s,f = self.head,self.head
        while(f.next != None and f.next.next != None):
            s = s.next
            f = f.next.next
        h1 = self.head
        h2 = self.reverseList(s.next)
        s.next = None
        while h1 != None and h2 != None:
            if h1.data != h2.data:
                return False
            h1 = h1.next
            h2 = h2.next
        return True

    def reverseList(self, list_head):
        current = list_head
        next,prev=None,None 
        while current:
            next = current.next
            current.next = prev
            prev = current
            current = next
        return prev 


list1 = linkedList()
list1.insert_node(9)
list1.insert_node(6)
list1.insert_node(9)
list1.display()
if list1.isPal():
    print("Yes")
else:
    print("NO")
