#include <iostream>
#include <stack>
using namespace std;

stack<string> Aero;

void display(stack<string>Aero)
{
    while(!Aero.empty())
    {
        cout << Aero.top() << endl;
        Aero.pop();
    }
}

void queue(stack<string>Aero)
{
    while(!Aero.empty()){
        return;
    }
}

int main()
{
    Aero.push("C++");
    Aero.push("Java");
    Aero.push("python");
    
    cout << "stack: "<< endl << endl;
    
    display(Aero);
    cout << endl << "________";
    return 0;
}