/********************************************************************
  > File Name: StrCompare.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年05月11日 星期五 14时07分18秒
********************************************************************/

#include "gtest/gtest.h"
#include <iostream>
#include <string>
using namespace std;

TEST(StrCompare,CStrTest)
{
    char str[10]="123A";
    char str2[10]="123a";
    //ASSERT_EQ(str,str2);//C字符串不可以使用此断言
    //ASSERT_STREQ(str,str2);
    //ASSERT_STRNE(str,str2);
    ASSERT_STRCASENE(str,str2);
    //ASSERT_STRCASEEQ(str,str2);
}

TEST(StrCompare,CXXStrTest)
{
    string str("123A");
    string str2("123a");
    //ASSERT_EQ(str,str2);//C++字符串使用此断言
    //ASSERT_NE(str,str2);
    //ASSERT_LT(str,str2);
    //ASSERT_LE(str,str2);
    //ASSERT_GT(str,str2);
    ASSERT_GE(str,str2);
}

int main(int argc,char* argv[])
{
    ::testing::InitGoogleTest(&argc,argv);
    int ret=RUN_ALL_TESTS();
    if(0==ret)
        cout<<"result:success"<<endl;
    else
        cout<<"result:fail"<<endl;
    return ret;
}

