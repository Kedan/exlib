#include <iostream>

#include <nudny/baseline/baseline.hpp>
#include <exlib/main.hpp>

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
}; //namespace exlib

int main(int argc, char* argv[]) {
	nudny::baseline::Baseline b;
	std::cout << "Exlib\nVersion: " << b.version << "\n";

	exlib::Main app;
	return app.execute();
}
