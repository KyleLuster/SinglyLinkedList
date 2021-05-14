//Kyle Luster
//This is my own work
//1-30-21
#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

int main() {
  cout<<"Creating our SLL"<<endl;

  LinkedList ratatouille;
  LinkedList chef_boyardee;

  ratatouille.insertValue(10);
  ratatouille.insertValue(20);
  ratatouille.insertValue(30);
  ratatouille.insertValue(40);
  ratatouille.insertValue(50);
  ratatouille.insertValue(60);
  ratatouille.display();
  cout<<"Getting front value"<<endl;
  ratatouille.getFront();
  cout<<"Getting back value"<<endl;
  ratatouille.getBack();
  cout<<"Deleting front"<<endl;
  ratatouille.deleteFront();
  ratatouille.display();
  cout<<"Deleting back"<<endl;
  ratatouille.deleteBack();
  ratatouille.display();
  cout<<"Checking if empty"<<endl;
  ratatouille.checkEmpty();
  cout<<"Returning size"<<endl;
  ratatouille.returnSize();
  cout<<"Printing reverse"<<endl;
  //does this satisfy the requirements? or do I need to make a separate list?
  //  ratatouille.printBack();
  ratatouille.reverse();
  ratatouille.display();

  cout << "chef_boyardee linked list" << endl;
  chef_boyardee.insertValue(100);
  chef_boyardee.insertValue(90);
  chef_boyardee.insertValue(80);
  chef_boyardee.insertValue(70);
  chef_boyardee.insertValue(60);
  chef_boyardee.display();

  //both the new list and old list must be in ascending order
  cout<<"Merging two SLLs"<<endl;
  ratatouille.merge(chef_boyardee);
  ratatouille.display();

   return 0;
}
