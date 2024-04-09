#include<iostream>

using namespace std;

int main ()
{

    int  i =10;
    int &iix = i;
    int *p  = &i;
    int *p1 = &iix;
    cout<<&i<<p<<endl;
    cout<<&iix<<p1<<endl;

    //注释
    return 0;


}
