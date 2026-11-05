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

template <typename T>
ListArray<T>::ListArray(){
        max = MINSIZE;
        n = 0;
        arr = new T[max];
};

template<typename T>
ListArray<T>::~ListArray(){
        delete[] arr;
};

template<typename T>
void resize(int new_size){
    T* v = new v[new_size];
    for(int i = 0; i < new_size; i++) v[i] = arr[i];
    delete[] arr;
    arr = v;
    max = new_size;
};

template<typename T>
void insert(int pos, T e){
    if(n > max + 1){
        throw std::out_of_range("Position out of range");
    } else {
        if(n == m) resize(m + 1);

        T aux = 0;
        T aux2 = e;
        for(int i = pos - 1; i < max; i++){
            aux = arr[i];
            arr[i] = aux2;
            aux2 = aux;
        }
    }
};



