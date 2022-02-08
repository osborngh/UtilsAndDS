#include "../include/Vector.h"
#include <iostream>

Vector::Vector(int cap=2): m_Cap(cap), m_Size(0)
{
    this->m_Arr = new int[this->m_Cap];
}

Vector::~Vector()
{
    // m_Cap = 0;
    // m_Size = 0;
    // arr = nullptr;
    delete[] this->m_Arr;
}

void Vector::push(int num)
{
    if (this->m_Cap <= this->m_Size)
    {
        this->m_Cap *= 2;
        int *new_arr = new int[this->m_Cap];
        for (int i = 0; i != this->m_Size; i++)
        {
            new_arr[i] = this->m_Arr[i];
        }
        this->m_Arr = new_arr;
    }
    this->m_Arr[this->m_Size++] = num;
}

void Vector::print()
{
    std::cout << "[";
    for (int i = 0; i != this->m_Size; i++)
    {
        std::cout << " " << this->m_Arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}

void Vector::pop()
{
    this->m_Size--;
}

const int Vector::first()
{
    return this->m_Arr[0];
}

const int Vector::last()
{
    return this->m_Arr[this->m_Size - 1];
}

const int Vector::operator[](int i)
{
    if (i < this->m_Size)
    {
        return this->m_Arr[i];
    }
    return 99999;
}

const int Vector::capacity()
{
    return this->m_Cap;
}

const int Vector::len()
{
    return this->m_Size;
}