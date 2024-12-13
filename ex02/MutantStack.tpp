/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:52:20 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/13 12:13:07 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

/// @note New in C++; thes function are include <deque> which is underlying in <stack>
/// @fn std::begin returns an iterator to the beginning of the given container.
/// @fn std::end returns an iterator to the end of the given container.
/// @fn std::rbegin returns a reverse iterator to the beginning of the given container.
/// @fn std::rend returns a reverse iterator to the end of the given container.

/// @brief standard constructor for MutantStack
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

/// @brief Parameterized constructor for MutantStack
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>(src) {}

/// @brief Assignment operator for MutantStack
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return (*this);
}

/// @brief Destructor for MutantStack
template <typename T>
MutantStack<T>::~MutantStack() {}

/// @brief Returns an iterator to the beginning of the stack
template <typename T>
typename MutantStack<T>::iterat MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

/// @brief Returns a const iterator to the beginning of the stack
template <typename T>
typename MutantStack<T>::constIterat MutantStack<T>::begin() const
{
	return (std::stack<T>::c.begin());
}

/// @brief Returns an iterator to the end of the stack
template <typename T>
typename MutantStack<T>::iterat MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

/// @brief Returns an const iterator to the end of the stack
template <typename T>
typename MutantStack<T>::constIterat MutantStack<T>::end() const
{
	return (std::stack<T>::c.end());
}

/// @brief Returns a reverse iterator to the beginning of the stack
template <typename T>
typename MutantStack<T>::reverseIterat MutantStack<T>::rbegin()
{
	return (std::stack<T>::c.rbegin());
}

/// @brief Returns a const reverse iterator to the beginning of the stack
template <typename T>
typename MutantStack<T>::constReversIterat MutantStack<T>::rbegin() const
{
	return (std::stack<T>::c.rbegin());
}

/// @brief Returns a reverse iterator to the end of the stack
template <typename T>
typename MutantStack<T>::reverseIterat MutantStack<T>::rend()
{
	return (std::stack<T>::c.rend());
}

/// @brief Returns a const reverse iterator to the end of the stack
template <typename T>
typename MutantStack<T>::constReversIterat MutantStack<T>::rend() const
{
	return (std::stack<T>::c.rend());
}

#endif
