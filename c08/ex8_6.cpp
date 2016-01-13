#include <fstream>
#include "../c07/ex7_26.h"

int main(int argc, char* argv[]) {
    std::ifstream ifs(argv[1]);
    Sales_data total;
    if (read(ifs, total)) {
        Sales_data trans;
        while (read(ifs, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
    }

    return 0;
}