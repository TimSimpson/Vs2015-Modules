#include <iostream>
#include <string>
#include <vector>

module LibA;

// Finally, I can indulge my macro fetish and no one has to know.
// You and I is on a date macros. Destination: crazytown.

#define PROPERTY(name, type, internal) \
    type name () const { return this->internal; } \
    void name (type new_value) { this->internal = new_value; }


//using namespace std;

export namespace LibA {

    class Apple
    {
    public:
        Apple(int c)
        :   c(c)
        {
        }

        PROPERTY(count, int, c);

    private:
        int c;
    };

    int begin(const Apple & apple) {
        return 0;
    }

    int end(const Apple & apple) {
        return apple.count();
    }

}
