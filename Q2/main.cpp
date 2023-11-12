#include "myque.h"
#include <iostream>

using namespace std;

int main(){
    ME::myque<int> queue1;
    
    cout << "Currently, is the queue empty? " << (queue1.empty() ? "Yes." : "No.");
    queue1.push(11);
    queue1.push(22);
    queue1.push(33);
    queue1.push(44);
    cout << "\nPushing 11, 22, 33, 44 to the queue..." << endl;
    cout << "The item at the front of the queue is: " << queue1.front() << endl;
    queue1.pop();
    cout << "Popped the first element. Now the front is: " << queue1.front() << endl;
    cout << "Size of queue is: " << queue1.size();
    cout << "\nCurrently, is the queue empty? " << (queue1.empty() ? "Yes." : "No.");
    return 0;
}
