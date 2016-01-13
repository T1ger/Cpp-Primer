#include <fstream>
#include "../c07/ex7_26.h"

int main(int argc, char* argv[]) {
	std::ifstream ifs(argv[1]);
	std::ofstream ofs(argv[2], std::ofstream::app);
	Sales_data total;
	if (read(ifs, total)) {
		Sales_data trans;
		while (read(ifs, trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			} else {
				print(ofs, total) << std::endl;
				total = trans;
			}
		}
		print(ofs, total) << std::endl;
	} else {
		ofs << "No data?!" << std::endl;
	}

	return 0;
}