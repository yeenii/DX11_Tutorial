#include "stdafx.h"
#include "inputclass.h"

InputClass::InputClass()
{
}

InputClass::InputClass(const InputClass&)
{
}

InputClass::~InputClass()
{
}

void InputClass::Initialize()
{
	int i;

	// ��� Ű���� ������ ���� ���·� �ʱ�ȭ �Ѵ�.
	for(i = 0; i < 256; i++)
	{
		m_keys[i] = false;
	}

	return;
}


bool InputClass::IsKeyDown(unsigned int key)
{
	// ����Ű ���� ��ȯ
	return m_keys[key];
}

void InputClass::KeyDown(unsigned int input)
{
	// Ű�� ���ȴٸ� �� ���¸� �迭�� ����
	m_keys[input] = true;
}

void InputClass::KeyUp(unsigned int input)
{
	// Ű�� �������ٸ� �� ���¸� �迭�� ����
	m_keys[input] = false;
}
