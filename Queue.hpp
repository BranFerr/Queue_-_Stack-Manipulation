#pragma once
#include <iostream>
#include "Queue.h"

using namespace std;


template <class T >
Queue1<T>::Queue1() {


}// Queue Object -------------------------------------------------------------------------------------------------------------------------------------------------------

template <class T >
Queue1<T>::~Queue1() {

    //seQ.~Sequence();

}// Queue DECONSTRUCTOR-------------------------------------------------------------------------------------------------------------------------------------------------------



template <class T>
void Queue1<T> ::clear(void) {

    seQ.clear();

}// Clear Function ----------------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
void Queue1<T> ::enqueue(T& x) {

    seQ.add(x, length());//Placing into last position

}//Enqueue Function -------------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
void Queue1<T> ::dequeue(T& x) {

    seQ.remove(x, 0);//Removing from front

}//Dequeue Function -------------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
int Queue1<T> ::length(void) {

    return seQ.length();

}//Length Function -------------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
void Queue1<T>::replaceFront(T& x) {

    if (length() != 0) {
        T temp = x;
        seQ.remove(x, 0);
        seQ.add(temp, 0);
    }//IF STATEMENT

}//replaceFront Function---------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
void Queue1<T>::outputQueue() {

    seQ.outputSequence();

}//Output FUNCTION-------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
void Queue1<T>::transferFrom(Queue1& source) {
    seQ.transferFrom(source.seQ);
    source.clear();
}//transferFrom FUNCTION--------------------------------------------------------------------------------------------------------------------------------------

template <class T>
T & Queue1<T>::front() {
    if (length() != 0) { // a test if the queue is empty
        return seQ.entry(0);
    }// if statement
    else {
        return seQ.entry(0);
    }// else statement
}// Front Function -------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
Queue1<T>& Queue1<T>::operator = (Queue1& rhs) {
    seQ.operator = (rhs.seQ);
    return (*this);
}//operator= FUNCTION-----------------------------------------------------------------------------------------------------------------------------------------
