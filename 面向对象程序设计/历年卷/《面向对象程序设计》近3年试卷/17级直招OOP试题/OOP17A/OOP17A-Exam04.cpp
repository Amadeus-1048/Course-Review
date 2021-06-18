// OOP17A-Exam04.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
public:
	Vector(int dim=0, const double *x=NULL) : n(dim), p(NULL)
	{
		if(n<=0)
		{
			n = 0; return;
		}
		p = new double[n];
		for(int i=0; i<n; i++)
			p[i] = (x==NULL)? 0 : x[i];
	}
	Vector(const Vector &v) : n(0), p(NULL)
	{
		*this = v;
	}
	virtual ~Vector()
	{
		if(p!=NULL) delete [] p;
		n = 0;
		p = NULL;
	}
	Vector & operator=(const Vector &v)
	{
		if(this == &v)
			return *this;
		if(p!=NULL) delete [] p;
		p = NULL;
		n = 0;
		if(v.n<=0)
			return *this;
		p = new double[n=v.n];
		for(int i=0; i<n; i++)
			p[i] = v.p[i];
		return *this;
	}
	double average() const
	{
		double y=0;
		for(int i=0; i<n; i++)
			y += p[i];
		if(n>0)
			y /= n;;
		return y;
	}
	double max() const
	{
		if(n==0) return 0;
		double max = p[0];
		for(int i=1; i<n; i++)
			if(p[i]>max) max = p[i];
		return max;
	}
	double min() const
	{
		if(n==0) return 0;
		double min = p[0];
		for(int i=1; i<n; i++)
			if(p[i]<min) min = p[i];
		return min;
	}
	double range() const	// 极差(range): 最大值-最小值
	{
		if(n==0) return 0;
		double min, max;
		min = max = p[0];
		for(int i=1; i<n; i++)
		{
			if(p[i]<min) min = p[i];
			if(p[i]>max) max = p[i];
		}
		return max-min;
	}
private:
	int n;
	double *p;
};

int main04()
{
	double array[] = {85, 73, 60, 98, 86, 76, 85, 90, 93, 80};
	int n = sizeof(array)/sizeof(*array);
	Vector v(n, array);
	cout << "范围: [" << v.min() << ", " << v.max()
		 << "],\t极差: " << v.range() 
		 << ",\t平均值: " << v.average() << endl;
	return 0;
}
