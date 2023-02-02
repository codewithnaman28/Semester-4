/*Problem Statement: Implement polynomial operations using Circular Linked List: Create, Display, Addition and
Evaluation 
Name: Naman Soni 
Roll No. 10
Batch A1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node *next;
};

void add_data(struct node *head)
{
    int choice = 1;
    struct node *temp = head;

    do
    {

        struct node *curr = (struct node *)malloc(sizeof(struct node));

        printf("\nEnter coefficient:\n");
        scanf("%d", &curr->coeff);
        printf("\nEnter exponent:\n");
        scanf("%d", &curr->exp);
        curr->next = head;
        temp->next = curr;
        temp = temp->next;
        printf("\nDo you want to enter more terms?\nEnter 1 for yes and 0 for no\n");
        scanf("%d", &choice);
    } while (choice != 0);
}

void display(struct node *head)
{
    if (head->next == head)
    {
        printf("\nNo data available");
    }
    struct node *curr = (struct node *)malloc(sizeof(struct node));
    curr = head->next;
    while (curr != head)
    {
        printf("%dx^%d", curr->coeff, curr->exp);
        curr = curr->next;
        if (curr != head)
        {
            printf("+");
        }
    }
    printf("\n");
}

struct node *add_polynomials(struct node *head1, struct node *head2)
{
    // Pointers for the result polynomial.
    struct node *result_head = (struct node *)malloc(sizeof(struct node));
    result_head->next = result_head;
    struct node *result_temp = result_head;
    struct node *result_current;

    // p1 and p2 are the pointers to the first node of the two polynomials.
    struct node *p1 = head1->next;
    struct node *p2 = head2->next;

    // In case one of the polynomial exhausts before the other one.
    while (p1 != head1 && p2 != head2)
    {
        // if the exponents are equal, add the coefficients and add the node to the result polynomial.
        if (p1->exp == p2->exp)
        {
            // Copy the data of thesum of the nodes to the result polynomial.
            result_current = (struct node *)malloc(sizeof(struct node));
            result_current->coeff = p1->coeff + p2->coeff;
            result_current->exp = p1->exp;
            result_current->next = result_head;
            result_temp->next = result_current;

            // Increment the result polynomial pointer, and other polynomial pointers.
            result_temp = result_temp->next;
            p1 = p1->next;
            p2 = p2->next;
        }

        // If the exponent of the first polynomial is greater than the second one, add the node to the result polynomial.
        else if (p1->exp > p2->exp)
        {
            result_current = (struct node *)malloc(sizeof(struct node));
            result_current->coeff = p1->coeff;
            result_current->exp = p1->exp;
            result_current->next = result_head;
            result_temp->next = result_current;

            // increment the result polynomial pointer, and p1
            result_temp = result_temp->next;
            p1 = p1->next;
        }

        // If the exponent of the second polynomial is greater than the first one, add the node to the result polynomial.
        else if (p2->exp > p1->exp)
        {
            result_current = (struct node *)malloc(sizeof(struct node));
            result_current->coeff = p2->coeff;
            result_current->exp = p2->exp;
            result_current->next = result_head;
            result_temp->next = result_current;

            // increment the result polynomial pointer, and p2
            result_temp = result_temp->next;
            p2 = p2->next;
        }
    }

    // Case when p2 exhausts before p1.
    if (p1 == head1 && p2 != head2)
    {
        result_temp->next = p2;

        // This loop is to make the last node of the result polynomial point to the head of the result polynomial.
        while (result_temp->next != head2)
        {
            result_temp = result_temp->next;
        }
        result_temp->next = result_head;
    }

    // Case when p1 exhausts before p2.
    else if (p1 != head1 && p2 == head2)
    {
        result_temp->next = p1;
        while (result_temp->next != head1)
        {
            result_temp = result_temp->next;
        }
        result_temp->next = result_head;
    }

    // Case when both p1 and p2 exhaust.
    else if (p1 != head1 && p2 != head2)
    {
        result_temp->next = p1;
        while (result_temp != head1)
        {
            result_temp = result_temp->next;
        }
        result_temp->next = result_head;

        result_temp->next = p2;
        while (result_temp != head2)
        {
            result_temp = result_temp->next;
        }
        result_temp->next = result_head;
    }

    return result_head;
}

int main()
{
    int choice = 0;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *added;

    printf("What you want to do:\n1.Insert Polynomial\n2.Addition of Two polynomials:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Insert polynomial:\n");
        add_data(head);
        display(head);
        break;

    case 2:
        printf("Please enter the first polynomial:\n");
        add_data(head1);
        display(head1);
        printf("\nEnter second polynomial:\n");
        add_data(head2);
        display(head2);
        printf("Addition of Polynomials:");
        added = add_polynomials(head1, head2);
        display(added);
        break;
    default:
        printf("!Invalid!");
        break;
    }

    return 0;
}