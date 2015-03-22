#include <iostream>
#include "List.h"

using namespace std;

int main()
{
  List<int> L;
  L.insert(5);
  L.insert(10);
  L.print_list();
}
