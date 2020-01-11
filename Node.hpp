#ifndef NODE_
#define NODE_

template<class T>
class Node
{
public:
   Node();  //default constructor
   Node(const T& an_item); //parameterized constructor
   Node(const T& an_item, Node<T>* next_node_ptr); //parameterized constructor

   /** @param an_item  contained in the node
        @post sets item_ to an_item */
   void setItem(const T& an_item);
    
    /** @param next_node_ptr points to the next node in the chain
     @post sets next_ to next_node_ptr */
   void setNext(Node<T>* next_node_ptr);
    
    /**@return item_*/
   T getItem() const ;
    
    /**@return next_*/
   Node<T>* getNext() const ;
    
private:
    T        item_; // A data item_
    Node<T>* next_; // Pointer to next_ node
}; // end Node

#include "Node.cpp"
#endif
