/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:52:16 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/10 19:58:01 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <algorithm>
#include <exception>
#include <iostream>
#include <list>
#include <vector>

/// @brief Exception class for when the value is not
/// found in the container.
/// @fn you could also use std::out_of_range and not code that.
class NotFoundException : public std::exception
{
	public:
		const char* what() const noexcept override;
};

/// @brief Function to find a value in a container.
template <typename T>
typename T::iterator easyfind(T& container, int value);

#include "easyfind.tpp"

#endif
