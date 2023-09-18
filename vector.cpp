#include <iostream>

template <class T>
class Vector {
private:
    T* data;
    int capacity;
    int size;

public:
    Vector() : data(nullptr), capacity(0), size(0) {}

    // 添加元素到向量末尾，如果需要扩展内部存储空间，就进行扩展
    void add(const T& element) {
        if (size == capacity) {
            // 如果当前容量不够，扩展容量为原来的两倍
            capacity = (capacity == 0) ? 1 : capacity * 2;
            T* newData = new T[capacity];
            for (int i = 0; i < size; ++i) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[size++] = element;
    }

    // 获取向量中的元素，通过下标访问
    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    // 获取向量的大小（元素个数）
    int get_size() const {
        return size;
    }

    // 移除指定索引的元素
    void remove(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        for (int i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --size;
    }

    // 复制构造函数
    Vector(const Vector<T>& other) : data(nullptr), capacity(0), size(0) {
        *this = other;
    }

    // 赋值运算符重载
    Vector<T>& operator=(const Vector<T>& other) {
        if (this != &other) {
            delete[] data;
            capacity = other.capacity;
            size = other.size;
            data = new T[capacity];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    ~Vector() {
        delete[] data;
    }
};

int main() {
    Vector<int> vint;
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vint.add(i);
    }
    std::cout << vint.get_size() << std::endl;
    std::cout << vint[m] << std::endl;
    vint.remove(m);
    std::cout << vint.add(-1) << std::endl;
    std::cout << vint[m] << std::endl;
    Vector<int> vv = vint;
    std::cout << vv[vv.get_size() - 1] << std::endl;
    vv.add(m);
    std::cout << vint.get_size() << std::endl;

    return 0;
}


