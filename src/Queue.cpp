#include "../include/Queue.h"
#include <iostream>

Queue::Queue()
{
    m_Front = nullptr;
    m_Rear = nullptr;
}

bool Queue::isEmpty()
{
    if (!(m_Front && m_Rear))
    {
        return true;
    }
    return false;
}

void Queue::Enqueue(Node *n)
{
    if (isEmpty())
    {
        m_Front = n;
        m_Rear = n;
    }
    else
    {
        m_Rear->next = n;
        m_Rear = n;
    }
}

void Queue::Dequeue()
{
    Node *temp = nullptr;
    if (isEmpty())
    {
        return;
    }
    else if (m_Front == m_Rear)
    {
        temp = m_Front;
        m_Front = nullptr;
        m_Rear = nullptr;
    }
    else
    {
        temp = m_Front;
        m_Front = m_Front->next;
    }
    delete temp;
}

void Queue::Print()
{
    if (isEmpty())
        std::cout << "Queue is Empty" << std::endl;
    else
    {
        Node *temp1 = m_Front;

        while (temp1 != nullptr)
        {
            std::cout << " " << temp1->data << " ";
            temp1 = temp1->next;
        }
    }
}