#include <iostream>
#include <string>
#include <stack>
using namespace std;

//loop test cause my code is garbage.
int main()
{
    char answer = 'y';
    string line;
    int i = 0;
    stack<int> st;

    cout << "Enter a postfix: ";
    getline(cin,line);

    while(answer == 'y')
    {
        while(line[i])
        {
            if(isalpha(line[i]))
            {
                cout << "Enter " << line[i] << ": ";
                int temp;
                cin >> temp;
                st.push(temp);
            }
            else
            {
                int left, right = 0;
                switch(line[i])
                {
                    case '+':
                        right = st.top();
                        st.pop();
                        left = st.top();
                        st.pop();
                        st.push(left+right);
                        break;
                    case '-':
                        right = st.top();
                        st.pop();
                        left = st.top();
                        st.pop();
                        st.push(left-right);
                        break;
                    case '*':
                        right = st.top();
                        st.pop();
                        left = st.top();
                        st.pop();
                        st.push(left*right);
                        break;
                    case '/':
                        right = st.top();
                        st.pop();
                        left = st.top();
                        st.pop();
                        st.push(left/right);
                        break;                        
                    default:
                        break;
                }
            }
            i++;
        }
        cout << "Solution: " << st.top() << endl;
        cout << "Continue? (Y/N): " << endl;
        cin.ignore();
        cin >> answer;
        if(tolower(answer) == 'y')
        {
            i = 0;
            cout << "Enter a postfix: ";
            cin.ignore();
            getline(cin, line);
        }
        else
        {
            break;
        }
    }

    return 0;
}