#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string s, t;
        getline(cin, s);
        cin.ignore();
        getline(cin, t);

        for (int i = 0; i<n-3; i++)
        {
            if (s[i + 1] == s[i + 2] && s[i] != s[i + 3])
            {
                s.erase((i + 1), 2);
            }
        }
        bool b=1;
        for(int i=0; i<m; i++)
        {
           if(s[i]!=t[i])
           {
              b=0;
              break;
           }
        }
        if(b==1)
        {
           cout<<"YES"<<endl;
        }
        else{
         cout<<"NO"<<endl;
        }
        cout<<endl<<s;

    }

}
