using GLib;
class OO1{
	public static int i;
	public virtual void OO()
	{
		i++;
	}
}
class OO2 : OO1{
	public new void OO()
	{
		OO1.i+=2;
	}
}
int main()
{
	OO1 a,b;
	a = new OO1();
	b = new OO2();
	for(int i = 0;i<0x4FFFFFFF;i++)
	{
		a.OO();
		b.OO();
	}
	stdout.printf("%d\n",OO1.i);
	return 0;
}
