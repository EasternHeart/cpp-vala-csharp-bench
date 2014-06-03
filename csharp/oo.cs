using System;
class OO1{
	public static int i;
	public virtual void OO()
	{
		i++;
	}
}
class OO2 : OO1{
	public override void OO()
	{
		OO1.i+=2;
	}
}
class OO{
static void Main()
{
	OO1 a,b;
	a = new OO1();
	b = new OO2();
	for(int i = 0;i<0x4FFFFFFF;i++)
	{
		a.OO();
		b.OO();
	}
	Console.WriteLine(OO1.i);
}
}
