#include<fstream>
#include<iostream>
#include<string>


using namespace std ;

int main()
{

    ifstream in;
    
    in.open("test.txt"); //文件流  ios:: app  添加模式
    if(!in){        // !in  用于检查流对象是否处于错误
        cerr<<"打开文件失败"<<endl;
        return 0;
    }

    // string line;
    // while (getline(in,line))  //这里把in流给了line流  是完整的给
    // {
    //     cout << line << endl;   // line 流是可以直接流向cout的
    // }
 

    //注意： 任何流在读取数据的时候都是按照指针读取的，如果读完了就不能再使用>>进行流动了
    //可以使用 ungetc(chr , istream) 将当前读取的chr退回给istream 流

    // while(in >>x)  // 这里会一个字符一个字符的给x  istream 对象（如 ifstream）在使用>>操作符
    //读取字符时会自动忽略空格、制表符、换行符等空白字符。因此，当你使用while(in >> x)循环读取文件时，
    //如果文件中存在空格，它们将被忽略 in.get(x) 就会保留空格
    // { 
    //     cout<<x;   // 这里会把x 给到输出流
    // }

    ofstream out;
    out.open("test_out.txt");
    if (!out){
        cerr<<"打开文件失败"<<endl;
        return 0;
    }
    char x;
    while (in.get(x))
    {
       out<<x;
    }
    



    cout<<endl;  // 给到终端
    in.close();
    out.close();
    return 0;
}