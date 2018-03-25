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
            if(line[i] == '*')
            {
                right = st.top();
                st.pop();
                left = st.top();
                st.pop();
                st.push(left*right);
                //cout << left * right << " ";
            }
            else if(line[i] == '+')
            {
                right = st.top();
                st.pop();
                left = st.top();
                st.pop();
                st.push(left+right);
                //cout << left + right << " ";
            }
            else if(line[i] == '-')
            {
                right = st.top();
                st.pop();
                left = st.top();
                st.pop();
                st.push(left-right);
            }
        }
        i++;
    }
    cout << st.top() << endl;
    
    return 0;
}