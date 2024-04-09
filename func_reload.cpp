#include<iostream>

using namespace std;


// int  add2ele(int a, int b);

// double  add2ele ( double a, double b);

    // system("chcp 65001"); // 解决中文乱码
    // int  a;
    // int  b;

   

    // cout<<"请以【x x】的形式输入两个数，如：1 2 "<<endl;
    // cin>>a>>b;
int a = 100;
int main ()
{

    int  i =10;
    int &iix = i;
    int *p  = &i;
    int *p1 = &iix;
    cout<<&i<<p<<endl;
    cout<<&iix<<p1<<endl;
//     for ( int i  = 0; i!=10;i++)
//     {
// sum+=i;
//     }
//     cout<<sum<<endl;
    // unsigned i = 10;
    // // while (cin>>b){
    // //     a +=b;
    // // }
    // // int _ ;
    // // cin>> _;
    // // cout<< _<<endl;
   
    // cout<<a-i<<endl;
    // cout<<"\7"<<endl;
    return 0;


}


// int add2ele(int a, int b){
//     int c;
//     c  = a+b;
    
//     return c;
// }


// double  add2ele ( double a, double b){
//     double c;
//     c  = a+b;
    
//     return c;
// }
