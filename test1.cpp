/*
 * @Author: MikyMing
 * @Date: 2020-10-08 09:53:03
 * @LastEditors: MikyMing
 * @LastEditTime: 2021-07-25 10:25:07
 * @Description: set
 * @Analysis: set
 * @FilePath: /algorithm/test1.cpp
 */
#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
private:
    stack<int> inStack, outStack;
    void in2out()
    {
        while (!inStack.empty())
        {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

public:
    void init()
    {
        for (int i = 0; i < 50; i++)
        {
            this->inStack.push(i);
        }
    }
    void push(int x)
    {
        inStack.push(x);
    }

    int pop()
    {
        if (outStack.empty())
        {
            in2out();
        }
        int x = outStack.top();
        outStack.pop();
        return x;
    }

    int peek()
    {
        if (outStack.empty())
        {
            in2out();
        }
        return outStack.top();
    }

    bool empty()
    {
        return inStack.empty() && outStack.empty();
    }
};

int main()
{
    MyQueue mq;
    cout << mq.empty() << endl;
    cout << mq.peek() << endl;
}
