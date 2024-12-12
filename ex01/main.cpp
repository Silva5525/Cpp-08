/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:22:05 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/12 13:37:44 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/// @brief subjekt main
/// @note new in C++: (for more information see Span.cpp)
/// @fn std::distance() returns the distance between two iterators.
/// @fn std::vector::insert() inserts elements from a range into the vector.
/// @fn std::vector::push_back() adds an element
/// @fn std::sort() sorts the elements in the vector.
/// @fn std::min() returns the smaller of two values.
/// @fn std::minmax_element() returns a pair of iterators to 
/// the smallest and largest elements in the vector.
/// @fn auto [a, b] Is a Structured Binding Declaration. allowing
/// to unpack the pair into two variables.
/// to the end of the vector.
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}

// /// @brief  my main for testing and playing around
// /// @note new in C++:
// /// @fn std::distance() returns the distance between two iterators.
// /// @fn std::vector::insert() inserts elements from a range into the vector.
// /// @fn std::vector::push_back() adds an element
// /// @fn std::sort() sorts the elements in the vector.
// /// @fn std::min() returns the smaller of two values.
// /// @fn std::minmax_element() returns a pair of iterators to 
// /// the smallest and largest elements in the vector.
// /// @fn auto [a, b] Is a Structured Binding Declaration. allowing
// /// to unpack the pair into two variables.
// /// to the end of the vector.
// int	main(void)
// {
// 	try
// 	{
// 		Span s = (Span(6));
// 		s.addNumber(54);
// 		s.addNumber(42);
// 		s.addNumber(-5);
// 		s.addNumber(83);
// 		s.addNumber(-12);
// 		s.addNumber(0);

		
// 		std::cout << s.shortestSpan() << '\n';
// 		std::cout << s.longestSpan() << '\n';

// 		Span s2 = (Span(10000));
// 		std::vector<int> v(10000);
// 		for (int i = 0; i < 10000; i++)
// 			v[i] = i * 7;
// 		s2.addNumbers(v.begin(), v.end());
// 		std::cout << "Shortest: " << s2.shortestSpan() << '\n';
// 		std::cout << "Longest: " << s2.longestSpan() << '\n';
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	return (0);
// }
