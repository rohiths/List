#include <iostream>
#include "ListNode.h"

#ifndef _LIST_H_
#define _LIST_H_

template <class Object>
Class List {
  private:
    List() : 
    {
      header = new Listnode();
    }
    void insert(const Object& x);
    ListNode<Object>& find(const Object& x);
  public:
    ListNode<Object> *header;
};

template <class Object>
void List<Object> :: insert(const Object& x)
{
  if (header == NULL)
    cout << "List is empty\n";
  else
    header->next = new ListNode(x, header->next);
}

template <class Object>
ListNode<Object>& List<Object> :: find(const Object& x)
{
  ListNode *temp = header->next;
  while(temp != NULL) {
    if (temp->data == x)
      return temp;
    temp = temp->next;
  }
}
