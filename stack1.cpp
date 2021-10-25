#include <iostream>
#include <conio.h>
using namespace std;
#define STACK_MAX 5

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item);
int pop(Stack *s);

int main(void)
{
    Stack my_stack;
    int item;

    my_stack.top = 0;

    push(&my_stack, 10);
    push(&my_stack, 20);
    push(&my_stack, 30);

    item = pop(&my_stack);
    cout << "Pop item: "<< item <<endl;

    getch();
}

// push
void push(Stack *s, int item)
{
    if(s->top < STACK_MAX)
    {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
        cout << "Stack is full!" << endl;
}

// pop
int pop(Stack *s)
{
    int item;

    if(s->top >= 0)
    {
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    else
    {
        cout << "Stack is empty!"<<endl;
        return -1;
    }
    return item;
}
