#include <iostream>
using namespace std;
#ifndef _LIST_NODE_H_
#define _LIST_NODE_H_

template <class Object>
class List;

template <class Object>
class ListItr;

template <class Object>
class ListNode {
  public:
    ListNode(const Object &d = Object(), ListNode<Object> *N = NULL) : data(d), next(N) {}

  private:
    Object data;
    ListNode<Object>* next;
    friend class List<Object>;
    friend class ListItr<Object>;
};
#endif
