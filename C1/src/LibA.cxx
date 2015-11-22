#include <iostream>
#include <string>
#include <vector>

module LibA;

using namespace std;

export namespace LibA {

    class Apple
    {
    public:
        Apple(int c)
        :   c(c)
        {
        }

        int count() const {
            return c;
        }

        void count(int c) {
            this->c = c;
        }


    private:
        int c;
    };

    int begin(const Apple & apple) {
        return 0;
    }

    int end(const Apple & apple) {
        return apple.count();
    }

    string str() {
        return "apples";
    }

    // void print_vector(std::vector<std::string> & v) {
    //     for(const std::string & e : v) {
    //         cout << e << "\n";
    //     }
    // }

}
