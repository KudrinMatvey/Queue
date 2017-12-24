#pragma once
template <class T>
class TQueue
{
	int MaxSize;
	int first;
	int last;
	int size;
	T* arr;
public:
	TQueue(int _MaxSize = 100)
	{
		if (_MaxSize < 0) throw - 1;
		MaxSize = _MaxSize;
		arr = new T[MaxSize];
		first = 0;
		last = -1;
		size = 0;
	}

	TQueue(const TQueue &tq) {
		MaxSize = tq.MaxSize;
		size = tq.size;
		arr = newT[MaxSize];
		for (int i = first; i < last + 1; i++)
			arr[i] = ts.arr[i];
	}

	TQueue & operator = (const TQueue &tq)
	{
		delete[] arr;
		MaxSize = tq.MaxSize;
		size - tq.size;
		arr = newT[MaxSize];
		for (int i = first; i < last + 1; i++)
			arr[i] = ts.arr[i];
	}

	~TQueue()
	{
		delete[] arr;
	}

	bool IsEmpty() const {
		if (size == 0) return true;
		return false;
	}

	bool IsFull() const {
		if (size == MaxSize) return true;
		return false;
	}

	void Push(T a) {
		if (!IsFull()) {
			if (last == MaxSize - 1)
				last = 0;
			else last++;
			arr[last] = a;
			size++;
		}
		else throw - 1;
	}

	T Pop() {
		if (!IsEmpty()) {
			T a = arr[first];
			if (first == MaxSize - 1)
				first = 0;
			else first++;
			size--;
			return a;
		}
		else throw - 1;
	}

	T GetFirst() {
		return first;
	}

	int GetSize() {
		return size;
	}

	int GetMaxSize() {
		return MaxSize;
	}

	void SetSize(int _Size) {
		if (_Size > MaxSize || _Size<0) throw - 1;
		size = _Size;
	}
};