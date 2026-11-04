#include <iostream>

#include <exlib/exlib.hpp>

int main(int argc, char* argv[]) {
	// TODO
	// add baseline dir to CMakeLists.txt
	//
	// nudny::baseline::Baseline b;
	// std::cout << "Exlib\nVersion: " << b.version << "\n";

	exlib::Main app;
	return app.exe(argc, argv);
}
