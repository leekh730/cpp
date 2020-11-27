#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T> class Stack{ //class T is like class
    private:
        vector<T> elements; //elements
    public:
        void push(T const); //push element
        T top(); //return top element
};

template <class T> void Stack <T>::push(T const element){
    elements.push_back(element); //vector function
}

template <class T> T Stack<T>::top(){
    return elements.back(); //vector function
}

int main(){
    Stack<int> intStack;
    Stack<string>stringStack;
    intStack.push(7);
    intStack.push(10);
    stringStack.push("hello");
    try{
        cout << intStack.top() << endl;
        cout << stringStack.top() << std::endl;
        return -1;
    }catch(std::exception msg){
        cout << "Exception caught in main() " << msg.what() << endl;
    return -1;
    }
    
    return 0;
}