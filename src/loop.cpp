#include <iostream>
#include <string>
using namespace std;

//loop test cause my code is garbage.
int main()
{
    char answer = 'y';
    string line = "abcdef";
    int i = 0;
    while(answer == 'y')
    {
        while(line[i])
        {
            cout << line[i] << " ";
            i++;
        }
        cout << "Continue?" << endl;
        cin >> answer;
        if(answer == 'y')
        {
            i = 0;
            cout << "Enter string: ";
            cin.ignore();
            getline(cin, line);
        }
    }

    return 0;
}