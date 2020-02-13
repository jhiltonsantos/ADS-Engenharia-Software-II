// Example program
#include <iostream>
#include <string>
#include <stdio.h>

struct Node2
{
    int id;
    Node2() 
    {
        id=0;
    }
    void setNode2(int i) 
    {
        id = i;
    }
    int getNode2() 
    {
        return id;        
    }
};

class Node3
{
    int id;
    Node3()
    {
        id = 2;
    }
    void setNode3(int i)
    {
        id = i;
    }
    int getNode2()
    {
        return id;
    }
};

using namespace std;
template<class T>
class No {
    public:
        T element;
        No<T> *next;
        No() {
            next=0;
        }
        No(T e, No<T> *p=0) {
            element=e;
            next=e;
        }
};

class List{
    protected:
        No<T> *begin;
        No<T> *end;
    public:
        List() {
            begin = end = 0;
        }
        void insert() {
            No<T> *novo = new No<T>(ele);
        }
        void print(){
            
        }
}

int main()
{
  /*struct Node2 y1;
  struct Node2 y2;
  
  y1.setNode2(3);
  y2 = y1;
  y2.setNode2(4);
  
  printf("%d", y1.getNode2());
  printf("%d", y2.getNode2());
  
  struct Node2 *x1 = new Node2();
  struct Node2 *x2 = new Node2();
  x2 = x1;*/
  
  Node3 *a1 = new Node3();
  Node3 *a2 = new Node();
  b->
  
  
  
  return 0; 
}
