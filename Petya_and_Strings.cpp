#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j =0;
    string s, t;
    cin >> s >> t;
    for(i=0;i< s.length(); i++){

    if(s[i]<97) 
        s[i] = char(s[i] + 32);
    if(t[i] < 97)
        t[i] = char(t[i] + 32);
    if(s[i] == t[i])
        j = 0;
    else if(s[i] > t[i]){
        j = 1;
        break;
        }
    else{
        j = -1; 
        break;  
        }
    }
    cout<< j;
    
    return 0;
}
