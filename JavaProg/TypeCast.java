class TypeCast
{
    public static void main(String arg[])
    {
	byte b;
	int i = 2578;
	double d = 323.142;
	System.out.println("Conversion of int to byte:............");
	b = (byte)i;
	System.out.println("i = "+i+"\tb = "+b);
	System.out.println("Conversion of double to int:............");
	i = (int)d;
	System.out.println("i = "+i+"\td = "+d);
	System.out.println("Conversion of double to byte:............");
	b = (byte)d;
	System.out.println("d = "+d+"\tb = "+b);
    }
}
