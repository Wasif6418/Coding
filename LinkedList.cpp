#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next = nullptr;

    Node()
    {
        ;
    }

    Node(int x_)
    {
        data = x_;
    }
};


void insertData(Node* &root, int x)
{
    if(root==NULL)
    {
        root = new Node(x);
    }

    else
    {
        Node* temp = root;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = new Node(x);
    }
}


void traverse(Node* root)
{
    Node* head = root;
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


Node* deleteData(Node* root, int val)
{
    //use dummy node
    Node* dummy = new Node(-1);
    dummy->next = root;

    Node* prev = dummy;
    Node* curr = root;

    while(curr!=NULL)
    {
        if(curr->data == val)
        {
            prev->next = curr->next;
            delete(curr);
            curr = prev->next;

        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }

    return dummy->next;
}


// https://www.interviewbit.com/blog/reverse-a-linked-list/
Node* reverseList(Node* root)
{
    Node* curr = root;
    Node* prev = NULL;
    Node* nextNode;

    while(curr!=NULL)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

bool searchValueIterative(Node* root, int val)
{
    Node *curr = root;
    while(curr!=NULL)
    {
        if(curr->data == val)
            return true;

        curr = curr->next;
    }

    return false;
}


bool searchValueRecursive(Node* root, int val)
{
    if(root==NULL)
        return false;

    if(root->data == val)
        return true;

    return searchValueRecursive(root->next, val);
}

// Floyd's cycle detection algorithm
bool hasCycle(Node *head)
{
    if(!head)
        return false;

    Node *slow = head;
    Node *fast = head->next;

    while(slow!=fast)
    {
        if(!fast || !fast->next)
        {
            return false;
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return true;
}

int main()
{
    Node *head = NULL;

    insertData(head, 1);
    insertData(head, 2);
    insertData(head, 4);
    insertData(head, 5);
    insertData(head, 5);
    insertData(head, 6);
    insertData(head, 6);
    insertData(head, 6);

    traverse(head);

    //head = deleteData(head, 6);

    //head = reverseList(head);

    //traverse(head);

    if(searchValueRecursive(head, 4))
        cout << "value found in the linked list " << endl;
    else
        cout << "value not found";

    return 0;
}
