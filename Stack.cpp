#include <iostream>
using namespace std;

const int Size = 30;

class Stack {
    char* stack = nullptr;
    int StackId;
    int tos;
public:
    Stack(int id);
    ~Stack();
    void init();
    void push(char ch);
    void pop();
};
Stack::Stack(int id) {
    StackId = id;
    stack = new char[Size];
    cout << "Стек номер " << id << " инициаллизирован" << endl;
    tos = 0;
}
Stack::~Stack() {
    cout << "Стек номер "<< StackId << " уничтожен" << endl;
    delete [] stack;

}
void Stack::init() {
    tos = 0;
};
void Stack::push(char ch) {
    if (tos == Size) {
        cout << "Стек полон!" << endl;
        return;
    }
    stack[tos] = ch;
    tos++;
}

void Stack::pop() {
    if (tos == 0) {
        cout << "Стек пустой!" << endl;
        return;
    }
    stack[tos] = '\0';
    tos--;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    Stack s1(3), s2(2);
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.pop();

    return 0;
}
