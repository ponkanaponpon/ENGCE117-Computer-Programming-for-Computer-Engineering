//นายคณาพล คณากุลสวรรค์  65543206006-0 Sec 1
//https://youtu.be/W_xHlh5NTtI

#include <stdio.h>

struct Node{
    int data;
    Node *next;
};

Node *beginning = NULL;

void AddNode(Node **head_ref, int new_data);
void UpdateData(Node **head_ref, int search_value, int new_value);
void DisplayAll(Node *head);
void SwapNode(Node **head_ref, int x, int y);
void DisplayBackRecursive(Node *head);
void DisplayBack(Node *head);

void AddNode(Node **head_ref, int new_data){
   Node *new_Node = new Node();
    new_Node->data = new_data;
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
    }
void UpdateData(Node **head_ref, int search_value, int new_value){
    Node *temp = *head_ref;
    while (temp != NULL)
    {
        if (temp->data == search_value)
        {
            temp->data = new_value;
            return;
        }
        temp = temp->next;
    }
   
}
void DisplayAll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void SwapNode(Node **head_ref, int x, int y)
{
    if (x == y)
        return;

    Node *prevX = NULL, *currX = *head_ref;
    while (currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }

    Node *prevY = NULL, *currY = *head_ref;
    while (currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }

    if (currX == NULL || currY == NULL)
        return;

    if (prevX != NULL)
        prevX->next = currY;
    else
        *head_ref = currY;

    if (prevY != NULL)
        prevY->next = currX;
    else
        *head_ref = currX;

   Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp; 
}
void DisplayBackRecursive(Node *head){
     if (head == NULL) return;
    DisplayBackRecursive(head->next);
    printf("%d ", head->data);
}
void DisplayBack(Node *head) {
    DisplayBackRecursive(head);
    printf("\n");
}

int main(){

    AddNode(&beginning, 40);
    AddNode(&beginning, 30);
    AddNode(&beginning, 20);
    AddNode(&beginning, 10);

    printf("AddNode : ");
    DisplayAll(beginning);   
    UpdateData(&beginning, 10,99);
    printf("UpdateData : ");
    DisplayAll(beginning);
    printf("UpdateDataRecursive : ");
    UpdateData(&beginning, 99,10);
    DisplayAll(beginning);
    printf("SwapNode 1 : ");
    SwapNode(&beginning,20,30);
    DisplayAll(beginning);
    printf("SwapNode 2 : ");
    SwapNode(&beginning,10,40);
    DisplayAll(beginning);
    printf("Showback : ");
    DisplayBack(beginning);
    return 0;
}