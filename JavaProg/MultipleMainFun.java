class MultipleMainFun
{
    public static void main(byte b)
    {
	System.out.println("b = "+b);
    }
    public static void main(int x, double y)
    {
	System.out.println("x = "+x);
	System.out.println("y = "+y);
    }
    public static void main(String arg[])
    {
	byte b = 45;
	int i = 2578;
	double d = 323.142;
	System.out.println("Java's main function containing String arguments");
	main(b);
	System.out.println("Return to main Function");
	main(i,d);
	System.out.println("End of main function");
    }
}
