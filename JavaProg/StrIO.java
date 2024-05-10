import java.util.*;
class StrIO
{
    public static void main(String args[])
    {
	int i;
	String str;
	Scanner sc=new Scanner(System.in);
	System.out.print("Enter any String: ");
	str = sc.nextLine();
	abc ob=new abc();
	ob.enter();
	System.out.println("Indexing of String are:.........................\n");
	for(i = 0; i < str.length(); i++)
	{
	  System.out.println("Str["+i+"]: "+str.charAt(i));
	}
  }
}
class abc
{
  void enter()
  {
  }
}