/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:52:12 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/10 20:19:02 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/// @brief test function for the easyfind function.
/// @note New in C++:
/// @fn std::find() is a function that searches for a value in a container & returns it.
/// @attention std::find(for container) && std::string::find (for string) are difrent
/// functions/in difrent librarys. 
/// @fn std::begin() returns an iterator to the beginning of the container.
/// @fn std::end() returns an iterator to the end of the container.
/// @fn std::vector (array style) is a container that is part of the C++ Standard Library.
/// it is used to store elements in a indexed manner.
/// @fn std::list (linked list style) is a container that is part of the C++ Standard Library.
/// it is used to store elements in a sequential manner.
/// @fn std::next() returns an iterator to the next element in the container.
/// @fn std::begin() returns an iterator to the beginning of the container.
int	main(void)
{
	try
	{
		std::cout << "++++++++++++++containers++++++++++++++" << std::endl;
		std::vector<int> vec = {1, 2, 3, 4, 5};
		for (int i = 0; i < 5; i++)
			std::cout << vec[i] << " ";
		std::cout << "<-vector" << std::endl;

		std::list<int> lst = {10, 20, 30, 40};
		for (int i = 0; i < 4; i++)
			std::cout << *std::next(lst.begin(), i) << " ";
		std::cout << "<-list" << std::endl;

		std::cout << "++++++++++++++easyfind++++++++++++++" << std::endl;
		std::cout << "easyfind Vector 3: ";
		std::cout << *easyfind(vec, 3) << std::endl;
		
		std::cout << "easyfind List 40: ";
		std::cout << *easyfind(lst, 40) << std::endl;
		
		std::cout << "non exist Vector 10: ";
		std::cout << *easyfind(vec, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}