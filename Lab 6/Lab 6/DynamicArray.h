#pragma once
class DynamicArray
{
private:
	int size;
	int* ptr;
public:
	DynamicArray();
	DynamicArray(const DynamicArray&);
	DynamicArray(const int, const int*);
	void Print() const;
	void Add(const int);
	void Subtract(const int);
	void Multiply(const int);
	void Divide(const int);
	int GetIndexOf(const int) const;
	int GetValueAtIndex(const int)const;
	void InsertValueAtEnd(const int);
	void DeleteValue(const int);
	void CopyArray(const int, const int*);
	void CopyObject(const DynamicArray&);
	void SortAscending();
	void SortDescending();
	DynamicArray MergeArray(const DynamicArray&);
	DynamicArray MergeArrayAndSort(const DynamicArray&);
	~DynamicArray();

};

