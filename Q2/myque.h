#ifndef MYQUE_H_
#define MYQUE_H_

#include <vector>

namespace ME{
template<typename Item_Type> class myque{
    private:
        std::vector<Item_Type> container;
    
    public: 
        /**constructs an empty queue*/
        myque();

        /**Determines whether queue is empty 
         * @return True if empty, false if not
        */
        bool empty() const;

        /**Returns a reference to the object at the front of the queue w/o removing it
         * @return Reference to object at queue front
        */
        Item_Type& front();

        /**Returns a constant refernece to queue front w/o removing it
         * @return Const reference to queue front w/o removing it
        */
        const Item_Type& front() const;

        /**Removes front of queue item
         * @return item removed
        */
        Item_Type& pop();
        
        /**Adds item to back of queue
         * @param item Item to be added
        */
        void push(const Item_Type& item);

        /**Returns number of items in the queue*/
        size_t size() const;
};
#include "myque.cpp"
}
#endif