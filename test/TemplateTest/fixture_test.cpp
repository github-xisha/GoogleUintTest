/********************************************************************
  > File Name: fixture_test.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年09月02日 星期日 21时13分36秒
********************************************************************/

#include<iostream>
#include<gtest/gtest.h>
using namespace std; 

class TestMap:public testing::Test
{
public:
    virtual void SetUp()   //TEST跑之前会执行SetUp
    {
        cout<<"SetUp"<<endl;
        test_map.insert(make_pair(1,0));
        test_map.insert(make_pair(2,1));
        test_map.insert(make_pair(3,2));
        test_map.insert(make_pair(4,3));
        test_map.insert(make_pair(5,4));
    }
    virtual void TearDown() //TEST跑完之后会执行TearDown
    {
        cout<<"TearDown"<<endl;
        test_map.clear();
    }
    map<int,int> test_map;
};
TEST_F(TestMap,Find)   //此时使用的是TEST_F宏
{
    map<int,int>::iterator it=test_map.find(1);
    ASSERT_NE(it,test_map.end());
}
TEST_F(TestMap,Size)
{
    ASSERT_EQ(test_map.size(),5);
}

int main(int argc,char *argv[])
{
    testing::InitGoogleTest(&argc, argv);//将命令行参数传递给gtest
    return RUN_ALL_TESTS();   //RUN_ALL_TESTS()运行所有测试案例
}
