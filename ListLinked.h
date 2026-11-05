template <typename T>
class ListArray{
    private:
        T* arr;
        int max;
        int n;
        static const int MINSIZE;
    public:
        ListArray();

        ~ListArray() override;

        T operator[](int pos);

        friend std::ostream& operator<<(
            std::ostream &out, 
            ListArray<T> &list
        );

        void resize(int new_size);
};
