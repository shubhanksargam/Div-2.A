#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j;
    string s;
    cin >> s;
    j = s.length();
    for (i = 0; i < j; i++)
    {
        // if((int)s[i] != 97 || (int)s[i] != 101 || (int)s[i] != 105 ||(int)s[i] != 111 || (int)s[i] != 117 || (int)s[i] != 65 || (int)s[i] != 69 || (int)s[i] != 73 ||(int)s[i] != 79 || (int)s[i] != 85 )
        // {
        //     if(s[i] < 97)
        //     cout << "." << (char)(s[i] + 32);
        //     else
        //     cout << "." << s[i] ;
        // }
        // if(s[i] != 97 || s[i]!= 101)
        // {
        //     if(s[i] < 97)
        //     cout << "." << (char)(s[i] + 32);
        //     else
        //     cout << "." << s[i] ;
        // }
         if(s[i] != 97  && s[i] != 101  && s[i] != 105 && s[i] != 111  && s[i] != 117 && s[i] != 121 && s[i] != 65  && s[i] != 69  && s[i] != 73 && s[i] != 79  && s[i] != 85 && s[i] != 89)
        {
            if(s[i] < 97)
            cout << "." << (char)(s[i] + 32);
            else
            cout << "." << s[i] ;
        }
    }
    return 0;
}
