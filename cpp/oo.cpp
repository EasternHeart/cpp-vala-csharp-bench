#include <iostream>
class OO1{
	public: virtual void OO();
	public: static int i;
};
class OO2 : public OO1{
	public: virtual void OO();	
};
int OO1::i;
void OO1::OO()
{
	OO1::i++;
}
void OO2::OO()
{
	OO2::i+=2;
}
int main()
{
	OO1 *a,*b;
	a = new OO1;
	b = new OO2;
	for(int i = 0;i<0x4FFFFFFF;i++)
	{
		a->OO();
		b->OO();
	}
	std::cout << OO1::i << std::endl;
	return 0;
}
