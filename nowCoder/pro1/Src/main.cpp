/*
计算字符串最后一个单词的长度，单词以空格隔开。
华为笔试题
*/

#include<iostream>
#include<string>

int main(){
    std::string str;
    std::cout<<"please enter a string:"<<"\n";
    //std::cin>>str;// 不能使用cin输入，因为cin只能读取空格前的字符，比如hello world，就只会读取hello
    std::getline(std::cin,str);

    int len=str.length();
    int count=0;
    for(auto i=len-1;i>=0;--i){
        if(str[i]!=' ')
            ++count;
        else
            break;
    }

    std::cout<<"the number is: "<<count<<std::endl;
    return 0;
}