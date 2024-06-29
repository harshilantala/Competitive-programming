//given an array find sum of 2 element is divisible by 2 then return pair of that
//ex. 2 4 6 8 
//2+4 = 6 is divisible by 2 then return (2,4)
//now 2+6= 8 and 2+8=10 is also divisible by 2 but we have to print only one pair that display unique element
//then 6+8= 14 is also divisible by 2 that why we have to print (6,8) also.
//and we have to print only n/2 pairs where n is sixe of array if we find only one pair then it will be not considered.
//final output: (2,4) , (6,8)

#include<iostream>
using namespace std;

int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0;i<6;i++)
    {
        for (int j = 1; j < 6; j++)
        {
            sum=arr[i]+arr[j];
            if(sum%2==0)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                
                }
        }
        
    }
}

