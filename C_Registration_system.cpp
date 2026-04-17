#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    map<string,int> m;
    for(int i=0; i<n; i++) 
    {
        string s;
        cin >> s;
        if(m.find(s) == m.end()) 
        {
            cout << "OK" << endl;
            m[s] = 0;
        } 
        else 
        {
            m[s]++;
            cout << s << m[s] << endl;
        }
    }
    return 0;
}