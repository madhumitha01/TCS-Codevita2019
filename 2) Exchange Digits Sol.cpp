#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    string temp = a;
    int flag = 1;
    while (stoi(temp) <= stoi(b))
    {

        bool temp1 = next_permutation(a.begin(), a.end());
        temp = a;
        if (!temp1)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << stoi(a)<<endl;
    else
        cout << "-1\n";

    return 0;
}
