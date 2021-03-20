#pragma once
#include "Sequence.hpp"


template <class T>
class Queue1
    //! is modeled by string of T
    //!   exemplar self
{
public: // Standard Operations
    Queue1();                                              //++++ CORRECT
    //! replaces self 
    //! ensures: self = <>
    ~Queue1();
    void clear(void);                                      //++++ CORRECT
        //! clears self 
    void transferFrom(Queue1& source);                      //++++ CORRECT
        //! replaces self
        //! clears source
        //! ensures: self = #source
    Queue1& operator = (Queue1& rhs);                       //++++ CORRECT
        //! replaces self
        //! restores rhs
        //! ensures: self = rhs
        // Queue1 Specific Operations*/
    void enqueue(T& x);                                      //++++ CORRECT
        //! updates self
        //! clears x
        //! ensures: self = #self * <#x>
    void dequeue(T& x);                                      //++++ CORRECT
        //! updates self
        //! replaces x
        //! requires: self /= <>
        //! ensures: <x> is prefix of #self  and  self = #self[1, |#self|)
    void replaceFront(T& x);                                                    //++++ CORRECT
        //! updates self, x
        //! requires: self /= <>
        //! ensures: <x> is prefix of #self  and  self = <#x> * #self[1, |#self|)
    T& front(void);                                                                //+++++ CORRECT
        //! restores self
        //! requires: self /= <>
        //! ensures: <front> is prefix of self
    int length(void);                                     //++++ CORRECT
        //! restores self
        //! ensures: length = |self|

    void outputQueue();

private: // Representation
    Sequence<T> seQ;
};// Queue End

