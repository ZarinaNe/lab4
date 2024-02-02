#include "Keyboard.hpp"
#include "functions.hpp"
#include "CommandKey.h"



void Keyboard::_printKeyboardField()
{
	//вывод текущего клавиатурного поля
	if (!_keys.empty())
	{
		std::cout << "\nkeyboard field: ";
		for (auto i : _keys) {
			i.getKeys();
		}
		std::cout << std::endl;
	}
}

void Keyboard::PressKeys(const std::string& string) {
	std::cout << "Entered: " << string << std::endl;
	int k = _pressedKeys.size();
	const char delim = '+';
	//введенная строка разделяется по знаку + и вводится в массив _pressedKeys
	//т.е. происходит симуляция нажатия отдельных клавиш

	splitString(string, delim, _pressedKeys);


	if (_pressedKeys.empty()) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		CommandKey key = CommandKey();
		key.setKeys(_pressedKeys[k]);
		// если нажаты несколько клавиш -> выполняем команду
		if (_pressedKeys[k].size() != 1) {
			if (_pressedKeys[k].size() == 2) {
				key.cmdDo();
			}
		}
		_keys.emplace_back(key);
	}
	k++;

	_printKeyboardField();
}

void Keyboard::Undo() {
	if (!_keys.empty()) {

		std::cout << "\n-UNDO- ";
		if (!_keys.empty()) {
			_keys.back().cmdUndo();
		}
		_keys.pop_back();

		_printKeyboardField();
	}
	else {
		std::cout << "\nThere is nothing to undo" << std::endl;
	}
}