/*************************************************************************
    > File Name: noncopyable.h
    > Author: markjenny
    > Mail: lijianlin0819@163.com 
 ************************************************************************/
#ifndef _M_NONCOPYABLE_H_
#define _M_NONCOPYABLE_H_

namespace mcoroutine
{

class noncopyable
{
protected:
	noncopyable() { }
	~noncopyable() { }

private:
	noncopyable(const noncopyable) {}
	noncopyable& operator=(const noncopyable) {}

};

}
#endif // _M_NONCOPYABLE_H_
