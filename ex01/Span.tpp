#include "Span.hpp"

/// @brief add a range of numbers to the span (in header because of template)
/// @tparam Iter type of the iterator
/// @param start the start of the range
/// @param end the end of the range
/// @note new in C++:
/// @fn std::distance() returns the distance between two iterators.
/// @fn std::vector::insert() inserts elements from a range into the vector.
template <typename Iter>
void	Span::addNumbers(Iter start, Iter end)
{
	if (num.size() + std::distance(start, end) > maxSixe)
		throw SpanFullException();
	num.insert(num.end(), start, end);
}