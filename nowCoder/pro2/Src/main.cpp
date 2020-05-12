/*
写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。
输出输入字符串中含有该字符的个数。
*/

#include<iostream>
#include<string>

int res(std::string str,char e){
    int count=0;
    for(auto i=0;i<str.length();++i){
        if((str[i] <= 'z' && str[i] >= 'a')||(str[i] <= 'Z' && str[i] >= 'A')){
            if(e==toupper(str[i])||e==tolower(str[i]))
                ++count;
        }
    }
    return count;
}

int main(){
    std::string str;
    char e;
    std::getline(std::cin,str);
    std::cin>>e;

    std::cout<<res(str,e)<<std::endl;
    return 0;
}