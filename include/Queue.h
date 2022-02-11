class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = nullptr;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        next = nullptr;
    }
};

class Queue
{
public:
    Queue();
    ~Queue();

    void Enqueue(Node *n);
    void Dequeue();

    bool isEmpty();
    void Print();

    Node *m_Front;
    Node *m_Rear;
};