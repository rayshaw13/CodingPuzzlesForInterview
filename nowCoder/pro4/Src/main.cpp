/*
连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
长度不是8整数倍的字符串请在后面补数字0，空字符串不处理
*/ 

#include<iostream>
#include<string>
void show(std::string str){
    char numS[8];
    for(auto i=0;i<str.length();i+=8){
        for(auto j=0;j<8;++j){
            if((i+j)<str.length())
                numS[j]=str[i+j];
            else
                numS[j]='0';
            }

        for(auto k=0;k<8;++k){
            std::cout<<numS[k];
        }
        std::cout<<"\n";
    }
}

int main(){
    std::string str1,str2;
    std::cin>>str1>>str2;
    show(str1);
    show(str2);
    return 0;
}