class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void Insert(int data, int pos);
        void Delete(int pos);
        void ReverseMut();
        void Reverse();
        void Print();

    private:
        struct m_Node
        {
            int data;
            m_Node* next;
        };
        m_Node* m_Head;
};
