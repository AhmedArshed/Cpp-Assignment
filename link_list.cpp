#include<iostream>
using namespace std;

struct node{
  int value;
  node *next;
};
class linklist{
private:
  node *head;
  node *temp;
  node *pre;
public:
  linklist()
  {
    head = NULL;
    temp = NULL;
  }
  void insurt(int in)
  {
    if(head = NULL)
    {
      head = new node;
      head -> value = in;
      head -> next = NULL;
    }
    else
    {
      head = temp;
      while(temp != NULL)
      {
        pre = temp;
        temp = temp -> next;
      }
      temp = new node;
      temp -> next = NULL;
      temp -> value = in;
      pre -> next= temp;
    }
}
    void print()
    {
      head = temp;
      while(temp != NULL)
      {
        cout << temp->value;
        temp = temp -> next;
      }
    }

};



int main()
{
linklist l1;
for(int i = 0 ; i< 5 ; i++)
	l1.insurt(2);

l1.print();	
}
