/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:21:42 by wdegraf           #+#    #+#             */
/*   Updated: 2025/04/16 20:38:03 by wdegraf          ###   ########.fr       */
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

		template <typename Iter>
		void	addNumbers(Iter start, Iter end);
		
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

#include "Span.tpp"

#endif