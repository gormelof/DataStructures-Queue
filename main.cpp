//
//  main.cpp
//  Data Structers - Queue
//
//  Created by Ömer Faruk Görmel on 02/11/14.
//

#include <iostream>

using namespace std;

int queue[5]; // Create queue
int last, maxLength; // last, queue end. maxLength, max size queue.

bool full () {
    if (last == maxLength) { // full
        return true;
    }
    else {
        return false;
    }
}

bool empty () {
    if (last == 0) {
        return true; // empty
    }
    else {
        return false;
    }
}

void enqueue () {
    if (!full()) {
        cout << "Value : ";
        cin >> queue[last];
        last++;
    }
    else {
        cout << "Full...\n";
    }
}

void dequeue () {
    if (!empty()) {
        last--;
        for (int i = 0; i < last; i++) { // shifting
            queue[i] = queue [i+1];
        }
        queue[last] = 0; // Null
    }
    else {
        cout << "Empty...\n";
    }
}

void showQueue () {
    for (int i = 0; i < maxLength; i++) {
        cout << "queue[" << i << "] : " << queue[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
    maxLength = 5; // queue size
    last = 0; // queue last/end
    
    int select;
    
    while (select != 4) {
        cout << "(1) Enqueue\n(2) Dequeue\n(3) Show queue\n(4) Exit"; // Menu
        cout << "\nSelect : ";
        cin  >> select;
        
        switch (select) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                showQueue();
                break;
            default:
                cout << "Try again...\n";
                break;
        }
    }
    
    return 0;
}
