/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:39:28 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/13 12:13:02 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>

/// @brief template class for a stack with iterators a crazy MutantStack
/// @tparam T Type of the stack
/// @note New in C++;
/// @fn std::begin returns an iterator to the beginning of the given container.
/// @fn std::end returns an iterator to the end of the given container.
/// @fn std::rbegin returns a reverse iterator to the beginning of the given container.
/// @fn std::rend returns a reverse iterator to the end of the given container.
/// @fn std::stack is a container adapter that gives the programmer the functionality of a stack.
/// @fn std::stack<T>::container_type. Is a type of the underlying container. by default it is std::deque<T>.
/// but can be changed to std::vector<T> or std::list<T>. 
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterat;
		typedef typename std::stack<T>::container_type::const_iterator constIterat;
		typedef typename std::stack<T>::container_type::reverse_iterator reverseIterat;
		typedef typename std::stack<T>::container_type::const_reverse_iterator constReversIterat;

		MutantStack();
		MutantStack(const MutantStack& src);
		MutantStack& operator=(const MutantStack& src);
		~MutantStack();

		iterat				begin();
		constIterat			begin() const;
		iterat				end();
		constIterat			end() const;

		reverseIterat		rbegin();
		constReversIterat	rbegin() const;
		reverseIterat		rend();
		constReversIterat	rend() const;
};

#include "MutantStack.tpp"

#endif
