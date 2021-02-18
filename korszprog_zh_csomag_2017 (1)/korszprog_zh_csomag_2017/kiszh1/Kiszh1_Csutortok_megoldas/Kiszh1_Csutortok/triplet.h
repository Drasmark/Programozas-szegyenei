#ifndef TRIPLET_H
#define TRIPLET_H

#include <exception>

namespace ZH
{

template <class T>
class Triplet
{
	T value1, value2, value3;
public:
	class AllTheSameException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "All values are the same";
		}
	};

	Triplet(const T &v1, const T &v2, const T &v3):
		value1(v1),
		value2(v2),
		value3(v3)
	{
	}

	// Visszatérés értékkel
	T biggest() const
	{
		if (value1==value2 && value1==value3)
			throw AllTheSameException();

		T ret=value1;
		if (ret<value2) ret=value2;
		if (ret<value3) ret=value3;
		return ret;
	}

	// Vagy visszatérés referenciával
//	const T &biggest() const
//	{
//		if (value1==value2 && value1==value3)
//			throw AllTheSameException();
//		const T *ret=&value1;
//		if (*ret<value2) ret=&value2;
//		if (*ret<value3) ret=&value3;
//		return *ret;
//	}
};

} // namespace ZH

#endif // TRIPLET_H
