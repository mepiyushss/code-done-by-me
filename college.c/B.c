#include<stdio.h>
void doSomething(List head)
{
  List p, q;
  int temp;
  if ((!head) || !(head -> next))
    return;
  p = head;
  q = head -> next;
  while(q != null)
  {
     temp = p->value;
     p-> value = q-> value;
     q-> value = temp;
     p = q-> next;
     q = p-> next;
  }
}