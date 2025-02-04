//// Create a class named COUnter with * A non static data member to keep a track of the count for each object * A static data member to kepp track of the total no object created.
//2.⁠ ⁠Implement a constructor for the Counter class that:
//•⁠  ⁠﻿﻿Initializes the non-static count member to 0.
//•⁠  ⁠﻿﻿Increments the static object count by 1.
//3.⁠ ⁠Include member functions in the Counter class to:
//•⁠  ⁠﻿﻿Increment the count of the current object.
//.  ⁠﻿﻿Get the current count of the object.
//•⁠  ⁠﻿﻿Get the total number of objects created (using the static data member).
//4.⁠ ⁠In the main function:
//•⁠  ⁠﻿﻿Create multiple objects of the Counter class.
//•⁠  ⁠﻿﻿Increment the count of some objects.
//•⁠  ⁠﻿﻿Print the count of each object.
//•⁠  ⁠﻿﻿Print the total number of objects created.

//answer:
#include <iostream>

using namespace std;

class Counter {
    int count;
    static int objectCount;

public:
    Counter() {
        count = 0;
        objectCount++;
    }

    void incrementCount() {
        count++;
    }

    int getCount() {
        return count;
    }

    static int getObjectCount() {
        return objectCount;
    }
};

int Counter::objectCount = 0;

int main() {
    Counter c1, c2, c3;

    c1.incrementCount();
    c2.incrementCount();

    cout << "Count of c1: " << c1.getCount() << endl;
    cout << "Count of c2: " << c2.getCount() << endl;
    cout << "Count of c3: " << c3.getCount() << endl;

    cout << "Total number of objects created: " << Counter::getObjectCount() << endl;

    return 0;
}