#ifndef LISTARRAY_H
#define LISTARRAY_H

#include <stdexcept>
#include <ostream>
#include "List.h"

template <typename T>

class ListArray : public List<T>{
	private:
		T*arr;
		int max;
		int n;
		static const int MINSIZE = 2;

		void resize(int nex_size);
	public:
		ListArray();
		~ListArray();
		T operator[](int pos){
			if (pos >=0 || pos < 0)
				return pos;
			else
				throw std::out_of_range
		}
		friend std::ostream& operator<<(std::ostream &out,const ListArray<T> &list);

};
#endif
