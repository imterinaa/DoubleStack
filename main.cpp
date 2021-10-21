#include <iostream>
#include "DStack.h"
int main()

{

    DStack<int> ts(10);

    ts.push1(10);
    ts.push1(120);
    ts.push1(130);
    ts.push1(15);
    ts.push1(12);
    ts.push1(100);

    ts.push2(12);
    ts.push2(13);
    ts.push2(150);
    ts.push2(120);



    while (!ts.Empty1()){
        std::cout << "  Вытащим из 1 стека элемент  " << ts.pop1() << std::endl;}
    while (!ts.Empty1()) {
        std::cout << ts.Top1() << " ";
        ts.pop1();
    }

    while (!ts.Empty2()){
        std::cout << std::endl<<"  Вытащим из 2 стека элемент  " << ts.pop2() << std::endl;}
    while (!ts.Empty1()) {
        std::cout << ts.Top2() << " ";
        ts.pop2();
    }
    cout << "Вытащить элемент из 1 стека " << ts.pop1();
    cout << "\nВытащить элемент из 2 стека " << ts.pop2();

    return 0;

}