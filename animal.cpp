#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    int m_nWeightBase;
protected:
    int m_nAgeBase;
public:
    void set_weight(int weight) {
        m_nWeightBase = weight;
    }

    int get_weight() {
        return m_nWeightBase;
    }

    void set_age(int age) {
        m_nAgeBase = age;
    }
};

class Cat : private Animal {
private:
    string m_strName;

public:
    Cat(const string& name) : m_strName(name) {}

    void set_print_age() {
        Animal::set_age(5);
        cout << m_strName << ", age = " << m_nAgeBase << endl;
    }

    void set_print_weight() {
        Animal::set_weight(6);
        cout << m_strName << ", weight = " << get_weight() << endl;
    }
};

int main() {
    Cat myCat("Whiskers");
    myCat.set_print_age();
    myCat.set_print_weight();

    return 0;
}

