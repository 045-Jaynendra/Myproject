import java.util.*;
class jay4
{
    public static void main(String str[])
    {
	Num ob=new Num();
	int a,b,c;
	Scanner sc=new Scanner(System.in);
	a=sc.nextInt();
	b=sc.nextInt();
	c=ob.add(a,b);
	System.out.print("Sum= "+c);
    }
}
class Num
{
    int c;
    int add(int a,int b)
    {
	c=a+b;
	return c;
    }
}