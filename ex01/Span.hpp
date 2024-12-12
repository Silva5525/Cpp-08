/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:21:42 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/12 13:38:24 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <exception>
#include <climits>

/// @brief Span class for calculating the span of a range of numbers
class Span
{
	private:
		unsigned int		maxSixe;
		std::vector<int>	num;

	public:
		Span();
		explicit Span(unsigned int N);
		Span(const Span& src);
		Span& operator=(const Span& src);
		~Span();

		void	addNumber(int n);
		
		/// @brief add a range of numbers to the span (in header because of template)
		/// @tparam Iter type of the iterator
		/// @param start the start of the range
		/// @param end the end of the range
		/// @note new in C++:
		/// @fn std::distance() returns the distance between two iterators.
		/// @fn std::vector::insert() inserts elements from a range into the vector.
		template <typename Iter>
		void	addNumbers(Iter start, Iter end)
		{
			if (num.size() + std::distance(start, end) > maxSixe)
				throw SpanFullException();
			num.insert(num.end(), start, end);
		}

		int		shortestSpan() const;
		int		longestSpan() const;
		
		class InsufficientException : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};

		class SpanFullException : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};
};

#endif