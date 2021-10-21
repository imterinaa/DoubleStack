//
// Created by Алина Терина on 21.10.2021.
//

#ifndef UNTITLED3_DSTACK_H
#define UNTITLED3_DSTACK_H


#include<iostream>
#include <stdlib.h>



using namespace std;


template <class T>
class DStack

{
    T* mas;
    int size;
    int NumLast1, NumLast2;

public:

    DStack(int _size=5)  // конструктор

    {

        size = _size;

        mas = new T[size];

        NumLast1 = -1;

        NumLast2 = size;

    }
    ~DStack() { //деструктор
        delete []mas;
    }
    DStack(const DStack<T> &ts):size(ts.size),NumLast2(ts.NumLast2),NumLast1(ts.NumLast1)
    {
        mas=new T[size];
        for(int i = 0;i<size;i++){
            mas [i]= ts.mas[i];
        }
    }
    bool Empty1() const{
        if(NumLast1==-1)
            return true;
        else return false;
    }
    bool Empty2() const{
        if(NumLast2==size)
            return true;
        else return false;
    }
    bool Full1() const{
        if(NumLast1==(size-1))
            return true;
        else return false;
    }
    bool Full2() const{
        if(NumLast2==0)
            return true;
        else return false;
    }
    void  CleanUp(){NumLast1=-1;NumLast2=size;}

    void push1(const T& ts)
    {
        if (NumLast1 < NumLast2 - 1)
        {
            NumLast1++;
            mas[NumLast1] = ts;
        }
    }

    void push2(const T& ts)

    {
        if (NumLast1 < NumLast2 - 1)
        {
            NumLast2--;
            mas[NumLast2] = ts;
        }
    }

    int pop1()
    {
        if (NumLast1 >= 0 )
        {
            T ts = mas[NumLast1];
            NumLast1--;
            return ts;
        }
        else{
                std::cout << "Стек пуст";
                return 0;
    }}

    int pop2()
    {
        if (NumLast2 < size)
        {
            T ts = mas[NumLast2];
            NumLast2++;
            return ts;
        }
        else{
            std::cout << "Стек пуст";
            return 0;
        }
    }
    T Top1(){
        if (NumLast1 < 0) {
            std::cout << "Стек пуст";
            return 0;
        }
        else {
            int ts = mas[NumLast1];
            return ts;
        }
    }
    T Top2(){
        if (NumLast1 >size ) {
            std::cout << "Стек пуст";
            return 0;
        }
        else {
            int ts = mas[NumLast1];
            return ts;
        }
    }
};




#endif //UNTITLED3_DSTACK_H
