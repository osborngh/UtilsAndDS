class Vector
{
    private:
        int m_Cap;
        int m_Size;
        int *m_Arr;
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