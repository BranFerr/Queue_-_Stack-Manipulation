#pragma once
#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
Stack1<T>::Stack1() {

}// Stack

template <class T>
Stack1<T>::~Stack1() {

}// ~Stack


template <class T>
void Stack1<T>::clear(void) {
    primary_queue.clear();
    secondary_queue.clear();
}// clear Function -------------------------------------------------------------------------------------------------------------------------------------------------

template <class T>
void Stack1<T>::transferFrom(Stack1& source) {
    primary_queue.transferFrom(source.primary_queue);
    secondary_queue.transferFrom(source.secondary_queue);
    source.clear();
}// transferFrom Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
Stack1<T>& Stack1<T>::operator = (Stack1& rhs) {
    primary_queue.operator = (rhs.primary_queue);
    secondary_queue.operator = (rhs.secondary_queue);
    return (*this);
}// operator =  Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
void Stack1<T>::push(T& x) {
    // enqueue in secondary_queue
    secondary_queue.enqueue(x);

    // add elements of primary_queue to secondary_queue
    while (primary_queue.length() != 0) {
        secondary_queue.enqueue(primary_queue.front());
        primary_queue.dequeue(x);
    }// while

    // swapping the queues
    Queue1<int> temp_queue = primary_queue;
    primary_queue = secondary_queue;
    secondary_queue = temp_queue;
}// push Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
void Stack1<T>::pop(T& x) {
    if (primary_queue.length() == 0) {
        return;
    }// if
    else {
        primary_queue.dequeue(x);
    }// else
}// pop Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
T& Stack1<T>::top() {
    if (length() != 0) { // a test if the queue is empty
        return primary_queue.front();
    }// if
    else {
        return primary_queue.front();
    }// else
}// replaceTop Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
void Stack1<T>::replaceTop(T& x) {
    primary_queue.replaceFront(x);
}// top Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
int Stack1<T>::length(void) {
    return primary_queue.length();
}// length Function -------------------------------------------------------------------------------------------------------------------------------------------------


template <class T>
void Stack1<T>::outputStack() {
    primary_queue.outputQueue();
}// outputStack Function -------------------------------------------------------------------------------------------------------------------------------------------------