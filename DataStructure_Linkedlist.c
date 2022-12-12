//
// Created by amrit on 12/11/2022.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node {
    int data;
    Node* next;
};

void show(Node* head) {

    printf("Linked list contains");
    while (head->next != NULL)
    {
        printf("\n{ Number: %d", head->data);
        printf("\nNext :%p:", (void*)head->next);
        printf("}\n");
        head = head->next;
    }
    printf("\n{ Number: %d", head->data);
    if (head->next == NULL)
        printf("\n Next : NULL");
    else {
        printf("\nNext :%p:", (void*)head->next);

    }
    printf(" }");
}

void push(Node* head, int number) {

    Node* pointer = head;
    if (head->next == NULL && head->data==0) {
        head->data = number;
        show(head);
        return;
    }
    else
    {
        while (pointer->next != NULL)
        {
            pointer = pointer->next;
        }
        Node* temp = (Node*)malloc(sizeof(Node));
        temp->data = number; // insert new number
        pointer->next = temp;
        temp->next = NULL;
    }

    show(head);
}

//delete from the end
void pop(Node* head) {

    while (head->next->next!=NULL)
    {
        if (head->next->next == NULL)
        {
            free(head->next->next);
            head->next = NULL;
        }
        head = head->next;
    }

}

void delete_begining(Node* head) {

//no need to transverse list :)
    Node* temp = head;
    head = head->next;
    free(temp);

}

void insert_at_n(Node* head,int data,int n) {

    int i = 1;
    Node* temp =(Node*)malloc(sizeof(Node));


    while (head->next !=NULL)
    {
        if (i == n-1)
        {
            temp->data = data;
            if (n == 0) { //insert at start
                temp->next = head;
                head = temp;
            }
            temp->next = head->next->next;
            head->next = temp;
            return;
        }
        head = head->next;
        i++;

    }

}

void delete_at_n(Node* head,int n) {

    int i = 1;
    Node* temp;
    while (head->next != NULL)
    {
        if (i == n - 1)
        {
            temp->data = data;
            if (n == 0) { //delete head?
                head = head->next;
            }

            else if (head->next != NULL)
            {
                temp = head->next;
                head->next = head->next->next;
                free(temp);
            }
            else {
                temp = head->next;
                head->next = head->next->next;
                free(temp);
            }
            return;
        }
        head = head->next;
        i++;

    }
    return;
}


void sort(Node* head) {
    //bubble sort on linked list

}
void singlyLinkedList() {

    enum choice { one, two, three, four,five ,six};
    int user_value = 0, data = 0,n=0;
    Node* myNode = (Node*)malloc(sizeof(Node));
    myNode->next = NULL;
    myNode->data = 0; // make first node with zero data
    printf("Welcome to singly linked list data structure");
    while (user_value >=6 ) {
        printf("What do you want to do 1.push 2.pop 3.delete_begining 4.insert_at_n 5.delete_at_n 6.sort 7.exit\n");
        scanf_s("%d", &user_value);
        switch (user_value) {
            case one:
                printf("enter value:");
                scanf_s("%d", &data);
                push(myNode, data);
                break;
            case two: pop(myNode);
                break;
            case three:delete_begining(myNode);
                break;
            case four:
                printf("enter value:");
                scanf_s("%d", &data);
                printf("enter N:");
                scanf_s("%d", &n);
                insert_at_n(myNode,data,n);
                break;
            default:
                break;

        }
    }

}

int main() {
    singlyLinkedList();
    return 0;
}