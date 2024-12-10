/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:52:16 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/10 20:10:51 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/// @brief Exception class for when the value is not
/// found in the container.
/// @fn you could also use std::out_of_range and not code that.
const char*	NotFoundException::what() const noexcept
{
	return ("Value not found in container.");
}

/// @brief /// @brief the easyfind function searches for a value in a container.
/// @param container the container to search in.
/// @param value the value to search for.
/// @return the iterator to the value.
/// @note New in C++:
/// @fn std::find() is a function that searches for a value in a container & returns it.
/// @attention std::find(for container) && std::string::find (for string) are difrent
/// functions/in difrent librarys. (Google it!) 
/// @fn std::begin() returns an iterator to the beginning of the container.
/// @fn std::end() returns an iterator to the end of the container.
template <typename T>
typename	T::iterator easyfind(T& container, int value)
{
	typename T::iterator i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw NotFoundException();
	return (i);
}
