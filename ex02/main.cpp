/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:39:48 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/13 12:16:05 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/// @brief main function for testing the MutantStack
/// @note New in C++;
/// @fn std::begin returns an iterator to the beginning of the given container.
/// @fn std::end returns an iterator to the end of the given container.
/// @fn std::rbegin returns a reverse iterator to the beginning of the given container.
/// @fn std::rend returns a reverse iterator to the end of the given container.
/// @fn std::push adds an element to the top of the stack.
/// @fn std::pop removes the top element from the stack.
/// @fn std::top returns the top element of the stack.
/// @fn std::size returns the number of elements in the stack.
/// @fn std::stack is a container adapter that gives the programmer the functionality of a stack.
/// @fn std::stack<T>::container_type. Is a type of the underlying container. by default
/// it is std::deque<T>. but can be changed to std::vector<T> or std::list<T>. 
int	main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;


	mstack.pop();

	std::cout << "after pop Top: " << mstack.top() << std::endl;
	std::cout << "after pop size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Stack content using iterators:" << std::endl;
	MutantStack<int>::iterat it = mstack.begin();
	MutantStack<int>::iterat ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "Stack using reverse iterators:" << std::endl;
	MutantStack<int>::reverseIterat rit = mstack.rbegin();
	MutantStack<int>::reverseIterat rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::stack<int> s(mstack);
	std::cout << "Copied  std::stack : " << s.size() << std::endl;

	return (0);
}

/// Subjekt main example
// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterat it = mstack.begin();
// MutantStack<int>::iterat ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }
