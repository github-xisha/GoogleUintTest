/********************************************************************
  > File Name: MathCalculate.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年05月10日 星期四 15时59分18秒
********************************************************************/

#include "gtest/gtest.h"
#include "../../src/MathCalculate/MathCalculate.h"
using namespace std;

class TestName:public ::testing::Test
{
    virtual void SetUp()
    {
    
    }

public:
    MathCalculate mc;
};

TEST_F(TestName,EQ_Test)
{
    ASSERT_EQ(5,mc.add(2,3))<<"User-Defined-Output-Info:mc.add(2,3)==5条件成立";
}

TEST_F(TestName,NE_Test)
{
    ASSERT_NE(5,mc.add(3,3))<<"User-Defined-Output-Info:mc.add(3,3)!=5条件成立";
}

int main(int argc,char* argv[])
{
    ::testing::InitGoogleTest(&argc,argv);
    int ret=RUN_ALL_TESTS();
    if(0==ret)
        cout<<"Test_Result:success"<<endl;
    else 
        cout<<"Test_Result:fail"<<endl;
    return ret;
}

