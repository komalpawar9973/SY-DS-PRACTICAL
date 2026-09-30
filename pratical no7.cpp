#include <iostream>
#include <string>
using namespace std;
#define MAX 5

string queue[MAX];
int priority[MAX];
int front = -1, rear = -1;

// Enqueue Operation
void enqueue(string request, int p)
{
    if ((rear + 1) % MAX == front)
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if (front == -1)
            front = 0;

        rear = (rear + 1) % MAX;
        queue[rear] = request;
        priority[rear] = p;
    }
}

// Priority Queue Operation
void priorityQueue()
{
    if (front == -1)
    {
        cout << "Queue is Empty\n";
        return;
    }

    int pos = front;
    int high = priority[front];

    int i = front;

    while (true)
    {
        if (priority[i] > high)
        {
            high = priority[i];
            pos = i;
        }

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    cout << "Priority Customer Processed: " << queue[pos] << endl;
}

// Dequeue Operation
void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        cout << "Processed Request: " << queue[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

// Display Operation
void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty\n";
        return;
    }

    int i = front;

    while (true)
    {
        cout << queue[i] << " (Priority " << priority[i] << ")" << endl;

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }
}

int main()
{
    enqueue("Customer 1", 1);
    enqueue("Customer 2", 3);
    enqueue("Customer 3", 2);

    cout << "Queue Contents:\n";
    display();

    cout << "\n";
    priorityQueue();

    cout << "\n";
    dequeue();

    cout << "\nQueue After Dequeue:\n";
    display();

    return 0;
}