#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    cout << "Enter a postfix: ";
    string line;

    stack<int> st;

    getline(cin,line);

    int i = 0;
    char answer = 'y';
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
            else if(line[i])
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
        cout << st.top() << endl;
        cout << "Continue (Y/N)?: " << endl;
        cin >> answer;
        if(tolower(answer) == 'y')
        {
            cout << "Enter postfix: ";
            getline(cin,line);
        }
    }
    return 0;
}