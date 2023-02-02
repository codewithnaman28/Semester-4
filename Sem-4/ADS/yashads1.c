#include <stdio.h>
#include <stdlib.h>
struct Polynode
{
    int coeff;
    int exponent;
    struct Polynode *next;
};
void acceptPoly(struct Polynode *head);
void displayPoly(struct Polynode *head);
void add(struct Polynode *h1, struct Polynode *h2, struct Polynode *h3);
float evaluation(struct Polynode *head, float x);
float power(float x, int y);
int length(struct Polynode *head);
void arrange(struct Polynode *head);
int main()
{
    struct Polynode *head1, *head2, *head3;
    int choice, i;
    float x, sum;
    head1 = (struct Polynode *)malloc(sizeof(struct Polynode));
    head1->exponent = -1;
    head2 = (struct Polynode *)malloc(sizeof(struct Polynode));
    head2->exponent = -1;
    do
    {
        printf("\n\n\n!!!!!!MENU!!!!!!");
        printf("\n1.CREATE f1(x) AND f2(x)");
        printf("\n2.DISPLAY f1(x) AND f2(x)");
        printf("\n3.f3(x)=f1(x)+f2(x)");
        printf("\n4.EVALUATE f1(x)");
        printf("\n5.EVALUATE f2(x)");
        printf("\n6.EVALUATE f3(x)");
        printf("\n7.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n\nENTER f1(x):");
            acceptPoly(head1);
            printf("\n\nENTER f2(x):");
            acceptPoly(head2);
            break;
        case 2:
            printf("\nf1(x): ");
            displayPoly(head1);
            printf("\nf2(x): ");
            displayPoly(head2);
            break;
        case 3:
            head3 = (struct Polynode *)malloc(sizeof(struct Polynode));
            head3->exponent = -1;
            add(head1, head2, head3);
            printf("\nf1(x)+f2(x)=f3(x): ");
            displayPoly(head3);
            break;
        case 4:
            printf("\nENTER VALUE FOR x:");
            scanf("%f", &x);
            sum = evaluation(head1, x);
            printf("\nf1(%f): %f", x, sum);
            break;
        case 5:
            printf("\nENTER VALUE FOR x:");
            scanf("%f", &x);
            sum = evaluation(head2, x);
            printf("\nf2(%f): %f", x, sum);
            break;
        case 6:
            printf("\nENTER VALUE FOR x:");
            scanf("%f", &x);
            sum = evaluation(head3, x);
            printf("\nf3(%f): %f", x, sum);
            break;
        case 7:
            return 0;
        default:
            printf("\nWRONG ENTRY!!!");
        }
        printf("\nENTER 1 TO CONTINUE:");
        scanf("%d", &i);
    } while (i == 1);
    return 0;
}
void acceptPoly(struct Polynode *head)
{
    struct Polynode *temp = head;
    struct Polynode *current;
    int coeff, exp, i;
    do
    {
        current = (struct Polynode *)malloc(sizeof(struct Polynode));
        printf("\nENTER EXPONENT:");
        scanf("%d", &exp);
        printf("\nENTER COEFFICIENT:");
        scanf("%d", &coeff);
        current->coeff = coeff;
        current->exponent = exp;
        current->next = head;
        temp->next = current;
        temp = current;
        printf("\nPRESS 1 TO ADD ANOTHER:");
        scanf("%d", &i);
    } while (i == 1);
    arrange(head);
}
int length(struct Polynode *head)
{
    struct Polynode *current = head->next;
    int i = 0;
    while (current != head)
    {
        i++;
        current = current->next;
    }
    return (i);
}
void arrange(struct Polynode *head)
{
    int len = length(head), i, j;
    struct Polynode *prev, *current, *temp;
    for (i = 0; i < len; i++)
    {
        prev = head;
        current = head->next;
        for (j = 0; j < len; j++)
        {
            temp = current->next;
            if (current->exponent < temp->exponent)
            {
                prev->next = temp;
                current->next = temp->next;
                temp->next = current;
                prev = prev->next;
            }
            else
            {
                prev = current;
                current = current->next;
            }
        }
    }
}
void displayPoly(struct Polynode *head)
{
    struct Polynode *current;
    if (head->next == NULL)
        printf("\nTHIS POLYNOMIAL DOESNOT EXIST");
    else
    {
        current = head->next;
        while (current->next != head)
        {
            printf("%dx^%d", current->coeff, current->exponent);
            current = current->next;
            if (current->coeff > 0)
                printf("+");
        }
        if (current->exponent != 0)
            printf("%dx^%d", current->coeff, current->exponent);
        else
            printf("%d", current->coeff);
    }
}
void add(struct Polynode *h1, struct Polynode *h2, struct Polynode *h3)
{
    struct Polynode *t1 = h1->next, *t2 = h2->next, *t3 = h3, *temp;
    while ((t1->exponent != -1) || (t2->exponent != -1))
    {
        if (t1->exponent == t2->exponent)
        {
            temp = (struct Polynode *)malloc(sizeof(struct Polynode));
            temp->coeff = t1->coeff + t2->coeff;
            if (temp->coeff != 0)
            {
                temp->exponent = t1->exponent;
                t3->next = temp;
                temp->next = h3;
                t3 = t3->next;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        else if (t1->exponent < t2->exponent)
        {
            temp = (struct Polynode *)malloc(sizeof(struct Polynode));
            temp->coeff = t2->coeff;
            temp->exponent = t2->exponent;
            t3->next = temp;
            temp->next = h3;
            t3 = t3->next;
            t2 = t2->next;
        }
        else
        {
            temp = (struct Polynode *)malloc(sizeof(struct Polynode));
            temp->coeff = t1->coeff;
            temp->exponent = t1->exponent;
            t3->next = temp;
            temp->next = h3;
            t3 = t3->next;
            t1 = t1->next;
        }
    }
}
float evaluation(struct Polynode *head, float x)
{
    struct Polynode *current = head->next;
    float sum = 0.0;
    while (current->exponent != -1)
    {
        sum = sum + current->coeff * power(x, current->exponent);
        current = current->next;
    }
    return (sum);
}
float power(float x, int y)
{
    float a = 1.0;
    for (int i = 1; i <= y; i++)
        a = a * x;
    return (a);
}