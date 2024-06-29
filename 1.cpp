//finding length of largest word in the string 
//ex. String = My Name is Harshil Antala
//Output = 7

#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str); 

    int max = 0, curr = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!= ' ')
        {
            curr++;
        }
        else
        {
            if(curr > max)
                max = curr;
            curr = 0;
        }
    }
    if(curr > max)
        max = curr;

    cout << "Length of the largest word: " << max << endl;
    return 0;
}

