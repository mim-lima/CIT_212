#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue
{
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue()
    {
        front = rear = -1;
    }

    void enqueue(int value)
    {
        if ((rear + 1) % SIZE == front)
        {
            cout << "Queue Full\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }

    void display()
    {
        int i = front;

        while (true)
        {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}