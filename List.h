#include <iostream>
#include "ListNode.h"

#ifndef _LIST_H_
#define _LIST_H_

template <class Object>
class List {
  public:
    List() : header(new ListNode<Object>()) 
    {
    }
    void insert(const Object& x);
    ListNode<Object>* find(const Object& x);
    void print_list();
  private:
    ListNode<Object> *header;
};

template <class Object>
void List<Object> :: insert(const Object& x)
{
    ListNode<Object> *temp = find(x);
    if (temp == NULL && header == NULL){
	header = new ListNode<Object>();
	header->next = new ListNode<Object>(x, header->next);
    } else if (temp == NULL)
	header->next = new ListNode<Object>(x, header->next);
}

template <class Object>
ListNode<Object>* List<Object> :: find(const Object& x)
{
  ListNode<Object> *temp = header->next;
  while(temp != NULL) {
    if (temp->data == x)
      return temp;
    temp = temp->next;
  }
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
