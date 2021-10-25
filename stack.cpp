#include <iostream>
using namespace std;
#define STACK_MAX 5

void push(int x);
int peek();
int pop();

int stack[STACK_MAX];
int top = -1;

int main(void)
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70); // no space
    cout << "Pop item: " << pop() << endl;
    cout << "Peek Item: " << peek() << endl;

    return 0;
}

// push
void push(int x)
{
    if(top < STACK_MAX)
    {
        top +=1;
        stack[top] = x;
        printf("Successfully added item. %d\n", x);
    }
    else
        printf("Exception! No space.\n");
}

// pop
int pop()
{
    if(top >= 0)
    {
        int value = stack[top];
        top -= 1;
        return value;
    }
    else
    {
        printf("Exception from pop! Empty Stack.\n");
        return -1;
    }
}

// peek
int peek()
{
    int val;
    if(top >= 0 && top < STACK_MAX)
        return stack[top];
    else
    {
        printf("Exception from peek! Empty Stack.\n");
        return -1;
    }
}
