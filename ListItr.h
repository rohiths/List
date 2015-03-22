#include <iostream>
#include "ListNode.h"

#ifndef _LIST_ITR_H_
#define _LIST_ITR_H_

template <class Object>
class ListItr{
  public:
  ListItr(ListNode<Object> *t) : current(t) {}
  bool isPastEnd()
  {
    return current->next == NULL;
  }
  bool isEmpty()
  {
    return current == NULL;
  }
  void advance()
  {
    current = current->next;
  }
  Object get_data()
  {
    if(!isEmpty())
	return current->data;
  }
  private:
    ListNode<Object> *current;
};
#endif
