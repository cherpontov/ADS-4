#include "gtest/gtest.h"
#include <string>
#include "tpqueue.h"


TEST(lab4,test1_1)
{
    TPQueue<SYM> pqueue;
    pqueue.push(SYM{'a',4});
    pqueue.push(SYM{'b',7});
    SYM c1=pqueue.pop();
    SYM c2=pqueue.pop();
    ASSERT_EQ(c1.ch,'b');
    ASSERT_EQ(c2.ch,'a');
}

TEST(lab4,test1_2)
{
    TPQueue<SYM> pqueue;
    pqueue.push(SYM{'a',4});
    pqueue.push(SYM{'b',4});
    SYM c1=pqueue.pop();
    SYM c2=pqueue.pop();
    ASSERT_EQ(c1.ch,'a');
    ASSERT_EQ(c2.ch,'b');
}

TEST(lab4,test1_3)
{
    TPQueue<SYM> pqueue;
    pqueue.push(SYM{'a',4});
    pqueue.push(SYM{'b',4});
    pqueue.push(SYM{'c',9});
    SYM c1=pqueue.pop();
    SYM c2=pqueue.pop();
    SYM c3=pqueue.pop();
    ASSERT_EQ(c1.ch,'c');
    ASSERT_EQ(c2.ch,'a');
    ASSERT_EQ(c3.ch,'b');
}