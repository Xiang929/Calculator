#ifndef _STACK_H_
#define _STACK_H_
#include<iostream>

#define MAXNUMBER 20
	template <typename Element>

	class Stack {
	public:
		Stack() { count = 0; };
		bool isEmpty();
		bool isFull();
		void get_top_element(Element &element);
		void push(Element element);
		void pop();

	private:
		int count;
		Element datas[MAXNUMBER];
	};
#endif // !STACK_H
