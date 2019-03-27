#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL; 
  
void insert(int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data = new_data; 
    new_node->next = head; 
    head = new_node; 
} 

void size() 
{ 
   struct Node* ptr;
   ptr = head;
   int counter = 0;
   while (ptr != NULL)
    {  
        ptr = ptr->next;
        counter++; 
    }
    cout << counter << endl; 
} 

void frontPlay(bool metod)
{
    struct Node* ptr;
    struct Node* tmp;
    ptr = head;
    if (ptr->next == NULL)
    {
        cout << ptr->data << endl; 
        if (metod == true)
        {
            tmp = ptr->next;
            delete tmp;
            head = NULL;
        }
    }
    while(ptr->next != NULL)
    {
        if(ptr->next->next == NULL)
        {
            if (metod == false) 
            {
                cout << ptr->next->data << endl;
                break;

            }
            else if (metod == true)
            {
                cout << ptr->next->data << endl;
                tmp = ptr->next;
                delete tmp;
                ptr->next = NULL;
                break;
            }
        }         
        ptr = ptr->next;  
    }
}

void del()
{
    struct Node* time;
    struct Node* tmp;
    time = head;
    while(time != NULL)
    {
        tmp = time;
        time = time->next;
        free(tmp);
        
    }
    head = NULL;
    cout<< "ok"<< endl;
}

int main() { 
  
    while(true)
    {
        string operation;
        cin >> operation;
        if (operation == "push")
        {
            int n;
            cin >> n;
            insert(n);
            cout << "ok" << endl;

        }
        else if (operation == "pop")
        {
            frontPlay(true);
        }
        else if (operation == "front")
        {
            frontPlay(false);
        }
        else if (operation == "size")
        {
            size();
        }
        else if (operation == "clear")
        {
            del();
        }
        else if (operation == "exit")
        {
            cout << "bye" << endl;
            return 0;
        }         
    }
}
