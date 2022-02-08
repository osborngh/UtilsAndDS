#include "../include/LinkedList.h"
#include <iostream>

LinkedList::LinkedList()
{
    m_Head = nullptr;
}

void LinkedList::Insert(int data, int pos)
{
    m_Node* temp1 = new m_Node;
    temp1->data = data;

    if (pos == 1)
    {
        temp1->next = m_Head;
        m_Head = temp1;
        return;
    }

    m_Node* temp2 = m_Head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void LinkedList::Delete(int pos)
{
    m_Node* temp1 = m_Head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp1 = temp1->next;
    }
    m_Node* temp2 = temp1->next;
    temp1->next = temp2->next;
}

void LinkedList::ReverseMut()
{
    m_Node *current, *prev, *next;
    current = m_Head;
    prev = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    m_Head = prev; 
}

void LinkedList::Reverse()
{
    // Shameful, I dont Care
    ReverseMut();
    Print();
    ReverseMut();
}

void LinkedList::Print()
{
    m_Node* temp1 = m_Head;

    while (temp1 != nullptr)
    {
        std::cout <<  " " << temp1->data << " ";
        temp1 = temp1->next;
    }
}