
using namespace ME;

/**constructs an empty queue*/
template<typename Item_Type>
myque<Item_Type>::myque(){}

/**Determines whether queue is empty 
 * @return True if empty, false otherwise
*/
 template<typename Item_Type>
 bool myque<Item_Type>::empty() const{
    return container.empty();
}

/**Returns a reference to the object at the front of the queue w/o removing it
 * @return Reference to object at queue front
*/
template<typename Item_Type>
Item_Type& myque<Item_Type>::front(){
    return container.front();
}

/**Returns a constant refernece to queue front w/o removing it
 * @return Const reference to queue front w/o removing it
*/
template<typename Item_Type>
const Item_Type& myque<Item_Type>::front() const{
    return container.front();
}

/**Removes front of queue item
 * @return The value popped
*/
template<typename Item_Type>
Item_Type& myque<Item_Type>::pop(){
    if (!container.empty()){
        Item_Type& temp = container.front();
        container.erase(container.begin());
        return temp;
    }
}

/**Adds item to back of queue
 * @param item Item to be added
*/
template<typename Item_Type>
void myque<Item_Type>::push(const Item_Type& item){
    container.push_back(item);
}

/**Returns number of items in the queue*/
template<typename Item_Type>
size_t myque<Item_Type>::size() const{
    return container.size();
}