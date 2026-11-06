#include <iostream>

#include <nudny/baseline/baseline.hpp>
#include <exlib/book.hpp>
#include <exlib/exlib.hpp>

namespace exlib {
	Main::Main() {
		std::cout << "ExLib\n";
	}
	bool Main::isRunning() { return m_IsRunning; }
	void Main::handleEvents() {
		std::cout << "Handle Events\n";

		if(cmd.cli("mode") == "interactive") {
		} else {
			if(cmd.cli("add") == "book") {
				std::cout << "Add Book\n";
			//	Book book{
			//		cmd.cli("title")
			//		,cmd.cli("author")
			//		,cmd.cli("publisher")
			//		,cmd.cli("year")
			//		,cmd.cli("pages")
			//	};
			} else {
				throw std::invalid_argument("ExLib unknown collection item!");
			}
		}
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
		if(isRunning()) {
			handleEvents();
		}
		return 0;
	}

	int Main::exe(int argc, char* argv[]) {
		parser.parse(argc, argv);
		cmd.setCli(parser);
		exe();


		return 0;
	}
}; //namespace exlib

