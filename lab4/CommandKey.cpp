#include "CommandKey.h"

void CommandKey::setKeys(std::vector<Key> keys)
{
	_keys = keys;
}

void CommandKey::getKeys()
{
	for (auto i : _keys) {
		if (!(_keys[0].Command == "Shift" && _keys[1].Command == "a"))
		{
			std::cout << i.Command << " ";
		}
	}
	std::cout << " ";
}

void CommandKey::cmdDo() {
	if (_keys.size() == 2) {
		if (_keys[0].Command == "Shift" && _keys[1].Command == "a") {
			std::cout << "Volume up +15%" << std::endl;
			return;
		}
	}
	getKeys();
	//std::cout << std::endl;
}


void CommandKey::cmdUndo()
{
	if (_keys.size() == 2) {
		if (_keys[0].Command == "Shift" && _keys[1].Command == "a") {
			std::cout << "Volume up -15%" << std::endl;
			return;
		}
	}
	getKeys();
}