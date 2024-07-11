//https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM
/*
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************

class Stack
{
    //Write your code here

public:
    Node *top;
    int size;
    Stack()
    {
        //Write your code here
        top = NULL;
        size = 0;
    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        return size==0;
    }

    void push(int data)
    {
        //Write your code here
        Node *newNode = new Node(data, top);
        top = newNode;
        size++;

    }

    void pop()
    {
        //Write your code here
        if(top == NULL) return;
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int getTop()
    {
        //Write your code here
        if(top == NULL) return -1;
        return top->data;
    }
};
*/



// second approach
/*
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************

class Stack
{
    //Write your code here

public:
    Node *head;
    int size;
    Stack()
    {
        //Write your code here
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        return size==0;
    }

    void push(int data)
    {
        //Write your code here
        Node *newNode = new Node(data);
        size++;
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }

    }

    void pop()
    {
        //Write your code here
        if(head == NULL) return;
        size--;
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    int getTop()
    {
        //Write your code here
        if(head == NULL) return -1;
        return head->data;
    }
};
*/

