#include "functions.hpp"
#include "Key.h"
class Key;
void splitString(std::string const& str, const char delim, std::vector<std::vector<Key>>& out) {

	std::vector<Key> keys;
	std::stringstream ss(str);

	std::string s;
	while (std::getline(ss, s, delim)) {

		Key key = Key();
		key.Command = s;
		std::cout << key.Command << " ";
		keys.emplace_back(key);

	}
	out.emplace_back(keys);

}

void Workflow() {
	auto keyboard = Keyboard{};

	keyboard.PressKeys("Shift+a");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("X+Y");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("x+Y+Z");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("A+B+C+D");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("X");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("b+C");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("Shift+d");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("Alt+b");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.PressKeys("Fn+f5");
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();
	std::this_thread::sleep_for(std::chrono::milliseconds{ 500 });
	keyboard.Undo();

}
