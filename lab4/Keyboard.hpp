#pragma once
#include <__msvc_chrono.hpp>
#include <mutex>
#include <stack>
#include <vector>
#include <sstream>
#include <iostream>
#include "CommandKey.h"
#include "Key.h"
//struct Key {
//	std::string Command;
//};
//
//struct CommandKey {
//	std::vector<Key> keys;
//	std::string cmdDo;
//	std::string cmdUndo;
//};
class Key;
class CommandKey;
class Keyboard {
protected:
	//массив использованных команд
	std::vector<CommandKey> _keys;
	//массив клавиш, нажатых одновременно
	std::vector<std::vector<Key>> _pressedKeys;

	void _printKeyboardField();
public:
	void PressKeys(const std::string& string);
	void Undo();
};


