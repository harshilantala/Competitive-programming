//input : 5 (any number)
//then output will be trailing 0 of 5!
//5! = 120 then output will be length of trailing 0 here output will be 1
//10! = 3628800 then output will be 2
//12! = 479001600 then output will be 2

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;
    int fact = 1;

    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }

    while(fact%10 == 0)
    {
        count++;
        fact =fact/10;
    }
    cout << count;
}