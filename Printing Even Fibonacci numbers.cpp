#include<iostream>
using namespace std;



int main()
{
    int num[20];
    num[0]=1;
    num[1]=2;

    for(int i=2; i<20; ++i)
    {
        num[i]=num[i-1]+num[i-2];
    }

    for(int i=0; i<20; ++i)
    {
        if(num[i]%2==0)
        cout<<num[i]<<endl;
    }



    cout<<endl<<endl;
    system("PAUSE");
    return 0;
}

/* Fibonacci sequence is generated by adding the previous two terms*/
