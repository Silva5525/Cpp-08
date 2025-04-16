/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:21:54 by wdegraf           #+#    #+#             */
/*   Updated: 2025/04/16 20:37:07 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/// @brief default constructor
Span::Span() : maxSixe(0) {}

/// @brief default constructor with size
/// @param N the size of the span
Span::Span(unsigned int N) : maxSixe(N) {}

/// @brief copy constructor
/// @param src to copy from
Span::Span(const Span& src) : maxSixe(src.maxSixe), num(src.num) {}

/// @brief assignment operator overload
/// @param src to assign from
/// @return the assigned object
Span& Span::operator=(const Span& src)
{
	if (this != &src)
	{
		maxSixe = src.maxSixe;
		num = src.num;
	}
	return (*this);
}

/// @brief destructor
Span::~Span() {}

/// @brief exception for not enough numbers
const char* Span::InsufficientException::what() const noexcept
{
	return ("Not enough numbers to calculate span");
}

/// @brief exception for span being full
const char* Span::SpanFullException::what() const noexcept
{
	return ("Span is full");
}

/// @brief add a number to the span
/// @param n number to add
/// @note new in C++:
/// @fn std::vector::push_back() adds an element
/// to the end of the vector.
void	Span::addNumber(int n)
{
	if (num.size() >= maxSixe)
		throw SpanFullException();
	num.push_back(n);
}

// /// @brief add a range of numbers to the span
// /// @tparam Iter type of the iterator
// /// @param start the start of the range
// /// @param end the end of the range
// /// @note new in C++:
// /// @fn std::distance() returns the distance between two iterators.
// /// @fn std::vector::insert() inserts elements from a range into the vector.
// template <typename Iter>
// void	Span::addNumbers(Iter start, Iter end)
// {
// 	if (num.size() + std::distance(start, end) > maxSixe)
// 		throw SpanFullException();
// 	num.insert(num.end(), start, end);
// }

/// @brief get the shortest span
/// @return the shortest span
/// @note new in C++:
/// @fn std::sort() sorts the elements in the vector.
/// @fn std::min() returns the smaller of two values.
int	Span::shortestSpan() const
{
	if (num.size() <= 1)
		throw InsufficientException();
	std::vector<int> hold = num;
	std::sort(hold.begin(), hold.end());
	int minSpan = INT_MAX;
	for (size_t i = 1; i < hold.size(); i++)
		minSpan = std::min(minSpan, hold[i] - hold[i - 1]);
	return (minSpan);
}

/// @brief gives the longest span
/// @return the longest span
/// @note new in C++:
/// @fn std::minmax_element() returns a pair of iterators to 
/// the smallest and largest elements in the vector.
/// @fn auto [a, b] Is a Structured Binding Declaration. allowing
/// to unpack the pair into two variables.
int Span::longestSpan() const
{
	if (num.size() <= 1)
		throw InsufficientException();
	auto [min, max] = std::minmax_element(num.begin(), num.end());
	return (*max - *min);
}
