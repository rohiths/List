#include <iostrea>
#include "ListNode.h"

#ifndef _LIST_ITR_H_
#define _LIST_ITR_H_

template <class Object>
class ListItr{
  public:
  ListItr(ListNode<Object> *t) : temp(t) {}
  bool isPastEnd()
  {
    return temp->next == NULL;
  }
  private:
    ListNode<Object> *temp;
};
