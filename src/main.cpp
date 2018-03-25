#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<int> s;
    string e;

    getline(cin,e);

    int i = 0;


    char *out;

    strcpy(out,e.c_str());

    for(int i = 0; i < e.length(); i++)
        cout << out[i] << endl;

    //cout << e[0] << endl << e[1] << endl;
/*
    for(int i = 0; i < e.length(); i++)
    {
        if(isdigit(e[i]))
        {
            cout << e[i] * 3 << endl;
            cout << stoi(&e[i]) * 3 << endl;
        }
    }
*/
    return 0;
}