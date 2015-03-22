#include <iostream>
#include "ListNode.h"
#include "ListItr.h"
#ifndef _LIST_H_
#define _LIST_H_

template <class Object>
class List {
  public:
    List() : header(new ListNode<Object>()) 
    {
    }
    void insert(const Object& x);
    ListItr<Object>* find(const Object& x);
    void print_list();
  private:
    ListNode<Object> *header;
};

template <class Object>
void List<Object> :: insert(const Object& x)
{
    ListItr<Object> *temp = find(x);
    if (temp->isEmpty())
	header->next = new ListNode<Object>(x, header->next);
}

template <class Object>
ListItr<Object>* List<Object> :: find(const Object& x)
{
  ListItr<Object> *temp = new ListItr<Object>(header->next);
  while (!temp->isEmpty() && temp->get_data() != x)
    temp->advance();

  return temp;
}

template <class Object>
void List<Object> :: print_list()
{
	ListNode<Object> *temp = header->next;
	while(temp != NULL) {
		cout << temp->data <<" ";
		temp = temp->next;
	}

	cout << endl;
}
#endif
