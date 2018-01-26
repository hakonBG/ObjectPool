#include "ObjectPool.h"

Buffer::Buffer(size_t size, int id):
	_size(size),
	_id(id)
{
	_buffer = new std::uint8_t[size];
}

Buffer::~Buffer()
{
	delete[] _buffer;
}

size_t Buffer::Size() const
{
	return _size;
}

int Buffer::Id() const 
{
	return _id;
}



