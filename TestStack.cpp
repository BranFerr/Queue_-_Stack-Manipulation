#include <iostream>
#include "Stack.hpp"
using namespace std; 

int main()
{
    // Testing out Stack1
    Stack1<int> s;
    Stack1<int> s2;
    Stack1<int> s3;

    // variables
    int a = 6;
    int b = 7;
    int c = 8;
    int d = 9;

    cout << "Stack s\n";
    cout << "\nTesting push";
    cout << "\ns before: ";
    s.outputStack();

    s.push(a);
    s.push(b);
    s.push(c);
    s.push(d);

    cout << "\ns after: ";
    s.outputStack();

    // test top
    cout << "\n";
    cout << "\n";
    cout << "Top: " << s.top() << "\n";
    cout << "\n";

    cout << "Testing Pop\n";
    cout << "\ns before: ";
    s.outputStack();

    // testing pop
    s.pop(a);

    cout << "\ns after: ";
    s.outputStack();
    cout << "\n";

    cout << "\nTesting replaceTop\n";
    // Testing replaceTop
    cout << "\ns before: ";
    s.outputStack();

    int e = 18;
    s.replaceTop(e);

    cout << "\ns after: ";
    s.outputStack();
    cout << "\n";

    cout << "\nTesting length for s: " << s.length();
    cout << "\n";

    // Testing operator=
    cout << "\nTesting operator=\n";
    cout << "\ns2 before: ";
    s2.outputStack();
    cout << "\ns before: ";
    s.outputStack();

    s2.operator=(s); //s2=s; is the same function USE THAT FUNCTION INSTEAD.

    cout << "\ns2 after: ";
    s2.outputStack();
    cout << "\ns after: ";
    s.outputStack();
    cout << "\n";

    // Testing transferFrom
    cout << "\nTesting transferFrom\n";
    cout << "\ns3 before: ";
    s3.outputStack();
    cout << "\ns before: ";
    s.outputStack();

    s3.transferFrom(s);

    cout << "\ns3 after: ";
    s3.outputStack();
    cout << "\ns after: ";
    s.outputStack();
    cout << "\n";

    return 0;

}//END MAIN