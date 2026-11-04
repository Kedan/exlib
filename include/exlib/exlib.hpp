#pragma once

#include <nudny/main/main.hpp>

namespace exlib {
	class Main : public nudny::Main {
		public:
			virtual bool isRunning();
			int exe();
			int exe(int argc, char* arcv[]);
		protected:
			bool m_IsRunning{false};
			virtual void handleEvents();
			virtual void clear();
			virtual void display();
			virtual void update();

	}; // class Main
}; // namespace exlib
