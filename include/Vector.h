class Vector
{
    private:
        int m_Cap; // Capacity of the "Vector"
        int m_Size; // Size of the "vector", Not really associated but just used for access
        int *m_Arr; // Underlying data;
    public:
        Vector(int);
        ~Vector();
        void push(int num);
        void print();
        void pop();
        const int first();
        const int last();
        const int operator[](int i);
        const int capacity();
        const int len();
};