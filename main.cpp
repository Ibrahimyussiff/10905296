#include <iostream>
using namespace std;
bool isPrime(int a)
{
    for (int i =2; i<a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    float sum=0.0;
    int c=0;
    int a;
    cout<<"enter any number"<<endl;
    cin>>a;

    for (int i=1; i<a; i++)
    {
        if (isPrime(i))
        {
            sum+=i;
            c++;
        }
    }
    float average=sum/c;
    cout<<"The average of the prime numbers is "<<average<<endl;
}
/*Yussiff Ibrahim 
