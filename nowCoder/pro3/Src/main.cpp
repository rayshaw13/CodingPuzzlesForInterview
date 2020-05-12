/*
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤1000），
对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。
然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。
请你协助明明完成“去重”与“排序”的工作(同一个测试用例里可能会有多组数据，希望大家能正确处理)
多组输入，多组输出
*/

#include<iostream>
#include<set>
//在set中元素都是唯一的，而且默认情况下会对元素自动进行升序排列
int main(){
    int n;
    while(std::cin>>n){
        int num1[1000];
        for(auto i=0;i<n;++i)
            std::cin>>num1[i];
        std::set<int> iSet={num1,num1+n};
        for(std::set<int>::iterator it=iSet.begin();it!=iSet.end();++it)
            std::cout<<*it<<"\n";
    }
    return 0;
}