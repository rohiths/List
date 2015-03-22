#include <iostream>
using namespace std;

template <class Object>
class ListNode {
  public:
    ListNode(const Object &d = Object(), ListNode *N = NULL) : data(d), next(N) {}
    
  private:
    Object data;
    Listnode *next;
};
