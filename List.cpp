#include <iostream>
#include "List.h"

using namespace std;

int main()
{
  List<int> L;
  L.insert(5);
  L.insert(10);
  L.insert(25);
  L.insert(11);
  L.print_list();
  L.Reverse_LL();
  L.print_list();
}
