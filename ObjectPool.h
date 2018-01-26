#include <memory>
#include <map>

class Buffer
{
public:
	Buffer(size_t size, int id);
	~Buffer();

	std::uint8_t *Get() const;
	size_t Size() const;
	int Id() const;

private:
	std::uint8_t *_buffer;
	size_t _size;
	int _id;
};


class BufferPool
{
public:
	typedef std::shared_ptr<BufferPool> Ptr;
	BufferPool(size_t numBuffers, size_t bufferSize);



private:
	size_t _numBuffers;
	size_t _bufferSize;

	
};

