#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string myString;
    stack<int> myStack;

    getline(cin,myString);

    for(int i = 0; i < myString.length(); i++)
    {
        if(isdigit(myString[i])) 
        {
            int temp = myString[i] - 48;
            myStack.push(temp);
        }
        else
        {
            int left = 0;
            int right = 0;
            left = myStack.top();
            myStack.pop();
            right = myStack.top();
            myStack.pop();
            if(myString[i] == '*')
            {
                cout << left * right << endl;
                myStack.push(left*right);
            }
        }
    }

    cout << endl;

    return 0;
}