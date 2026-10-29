#pragma once

#include <nudny/main/main.hpp>

namespace exlib {
	class Main : public nudny::Main {
		public:
			virtual bool isRunning();
		protected:
			bool m_IsRunning{false};
			virtual void handleEvents();
			virtual void clear();
			virtual void display();
			virtual void update();

	}; // class Main
}; // namespace exlib
