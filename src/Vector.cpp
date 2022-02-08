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
    if (m_Cap <= m_Size)
    {
        m_Cap *= 2;
        int *new_arr = new int[m_Cap];
        for (int i = 0; i != m_Size; i++)
        {
            new_arr[i] = m_Arr[i];
        }
        m_Arr = new_arr;
    }
    m_Arr[m_Size++] = num;
}

void Vector::print()
{
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

const int Vector::operator[](int i)
{
    if (i < m_Size)
    {
        return m_Arr[i];
    }
    return 99999;
}

const int Vector::capacity()
{
    return m_Cap;
}

const int Vector::len()
{
    return m_Size;
}