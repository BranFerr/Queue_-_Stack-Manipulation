#pragma once
#include "Queue.hpp"
template <class T>
class Stack1
   //! is modeled by string(T)
   //!   exemplar self
{
  public: // standard Operations
   Stack1();
      //! alters self
      //! ensures: self = < >

   ~Stack1();

   void clear(void);
      //! alters self
      //! ensures: self = < >

   void transferFrom(Stack1& source);
      //! alters self, source
      //! ensures self = #source  and  source = < >

   Stack1& operator =(Stack1& rhs);
      //! alters self
      //! preserves rhs
      //! ensures: self = rhs


   // Stack Specific Operations
   void push(T& x);
      //! alters self
      //! consumes x
      //! ensures: self = <#x> * self

   void pop(T& x);
      //! alters self
      //! produces x
      //! requires: self /= < >
      //! ensures: <x> is prefix of #self  and  self = #self[1, |#self|)

   void replaceTop(T& x);
      //! alters self, x
      //! requires: self /= < >
      //!  ensures: <x> is prefix of #self  and  self = <#x> * #self[1, |#self|)

   T& top(void);
      //! preserves self
      //! requires: self /= < >
      //!  ensures: <top> is prefix of self
      // IMPLEMENTED IN STACK.HPP


   int length(void);
      //! preserves self
      //! ensures: length = |self|
      // IMPLEMENTED IN STACK.HPP


   void outputStack(void);
      //! preserves self
      //! ensures self = #self
 
  private: // Representation
      Queue1<int> primary_queue, secondary_queue;

};//Stack end