#pragma once
#include <vector>
#include <string>
#include "Keyboard.hpp"
#include "Key.h"

class Key;
class CommandKey
{
private:
	std::vector<Key> _keys;
public:
	CommandKey() {};
	CommandKey(std::vector <Key> keys) {
		this->_keys = keys;
	};
	void setKeys(std::vector<Key> keys);
	void getKeys();
	void cmdDo();
	void cmdUndo();
};