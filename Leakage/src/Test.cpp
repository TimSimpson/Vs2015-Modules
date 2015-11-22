#include <iostream>
import LibA;

using std::cout;
using LibA::Apple;


#ifdef PROPERTY
    #error NO!
#endif


int main() {
    Apple a(10);
    cout << "I have\n";
    for (int i = begin(a); i < end(a); ++i) {
        cout << i << "\n";
    }
    cout << "apples.\n";
}
