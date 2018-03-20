#include<iostream>
#include"Stack.h"

template <typename Element>
bool Stack<Element>::isEmpty() {
	if (count == 0) {
		return true;
	}
	return false;
}

template<typename Element>
bool Stack<Element>::isFull() {
	if (count == MAXNUMBER) {
		return true;
	}
	return false;
}

template<typename Element>
void Stack<Element>::get_top_element(Element &element)
{
	if (!isEmpty()) {
		element = datas[count - 1];
		return;
	}
	return;
}


template<typename Element>
void Stack<Element>::push(Element element) {
	if (!isFull()) {
		datas[count++] = element;
		return;
	}
	return;
}

template<typename Element>
void Stack<Element>::pop() {
	if (!isEmpty()) {
		--count;
		return;
	}
	return;
}

