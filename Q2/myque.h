#ifndef MYQUE_H_
#define MYQUE_H_

#include <vector>

template<typename Item_Type>
    class myque{
        public:

        
        
        //constructor
        myque();

        private:
        bool empty() const;

        Item_Type& front();

        const Item_Type& front() const;

        void pop();

        void push(const Item_Type&)

        size_t size() const;
        std::vector<Item_Type> container;
    };
#endif