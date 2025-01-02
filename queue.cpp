#include <iostream>
using namespace std;

class Queue
{
private:
    int *queue;
    int front, rear, maxSize;

public:
    Queue(int size)
    {
        maxSize = size;
        queue = new int[maxSize];
        front = -1;
        rear = -1;
    }

    ~Queue()
    {
        delete[] queue;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == maxSize - 1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        cout << value << " enqueued successfully" << endl;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int value = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        cout << value << " dequeued successfully" << endl;
        return value;
    }

    void displayQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.displayQueue();

    q.dequeue();
    q.dequeue();

    q.displayQueue();

    return 0;
}
