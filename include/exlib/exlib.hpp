#pragma once

#include <nudny/main/main.hpp>
#include <nudny/cmd.hpp>

namespace exlib {
	class Main : public nudny::Main {
		public:
			Main();
			virtual bool isRunning();
			int exe();
			int exe(int argc, char* arcv[]);
		protected:
			bool m_IsRunning{true};
			virtual void handleEvents();
			virtual void clear();
			virtual void display();
			virtual void update();

			::nudny::cmd::CliParser parser;
			::nudny::cmd::Commander cmd;

	}; // class Main
}; // namespace exlib
