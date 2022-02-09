/*
This is Free Software that you can use. Although I strongly discourage using it.
Just Use It To Learn
*/

// Author: Flames (Osborn)
// Commented (unecessarily) so beginners can understand.

#include "../include/Vector.h"
#include <iostream>

Vector::Vector(int cap=2): m_Cap(cap), m_Size(0)
{
    m_Arr = new int[m_Cap];
}

Vector::~Vector()
{
    // m_Cap = 0;
    // m_Size = 0;
    // arr = nullptr;
    delete[] m_Arr;
}

void Vector::push(int num)
{
    /*
    Simple logic to simulate vector functionality
    Essentially just copies over items from one array to another when capacity is full
    */
    if (m_Cap <= m_Size)
    {
        /* As of now, the only way of extending the capacity is doubling it.
        I think that is how most "vector" classes extend capacity
        */
        m_Cap *= 2;

        int *new_arr = new int[m_Cap];

        /*
        Simple logic to simulate vector functionality
        Essentially just copies over items from one array to another when capacity is full
        */
        for (int i = 0; i != m_Size; i++)
        {
            new_arr[i] = m_Arr[i];
        }
        m_Arr = new_arr;
    }
    // This is the bit that inserts the item
    m_Arr[m_Size++] = num;
}

void Vector::print()
{
    // Standard Print Function with pretty much hardcoded functionality
    // Not Good but, i'm lazy
    std::cout << "[";
    for (int i = 0; i != m_Size; i++)
    {
        std::cout << " " << m_Arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}

void Vector::pop()
{
    m_Size--;
}

const int Vector::first()
{
    return m_Arr[0];
}

const int Vector::last()
{
    return m_Arr[m_Size - 1];
}

// Allows to access vector items like this: vec[i]
const int Vector::operator[](int i)
{
    if (i < m_Size)
    {
        return m_Arr[i];
    }
    return;
}

const int Vector::capacity()
{
    return m_Cap;
}

const int Vector::len()
{
    return m_Size;
}