#include <iostream>

#include <nudny/baseline/baseline.hpp>
#include <nudny/cmd.hpp>
#include <exlib/exlib.hpp>

namespace exlib {
	bool Main::isRunning() { return m_IsRunning; }
	void Main::handleEvents() {
		std::cout << "Handle Events\n";
	}
	void Main::clear() {
		std::cout << "Clear\n";
	}
	void Main::display() {
		std::cout << "Display\n";
	}
	void Main::update() {
		std::cout << "Update\n";
	}
		
	int Main::exe() {
		return 0;
	}

	int Main::exe(int argc, char* argv[]) {
		return 0;
	}
}; //namespace exlib

