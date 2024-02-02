#include "Keyboard.hpp"
#include "functions.hpp"
#include "CommandKey.h"



void Keyboard::_printKeyboardField()
{
	//����� �������� ������������� ����
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
	//��������� ������ ����������� �� ����� + � �������� � ������ _pressedKeys
	//�.�. ���������� ��������� ������� ��������� ������

	splitString(string, delim, _pressedKeys);


	if (_pressedKeys.empty()) {
		std::cout << "ERROR" << std::endl;
	}
	else {
		CommandKey key = CommandKey();
		key.setKeys(_pressedKeys[k]);
		// ���� ������ ��������� ������ -> ��������� �������
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