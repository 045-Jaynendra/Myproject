import java.util.*;
class table
{
    public static void main(String str[])
    {
	int n,i;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter no.: ");
	n = sc.nextInt();
	for(i = 1; i<=10 ; i++)
	{
	   System.out.println(n+ " * " +i+ " = " +n*i);
	}
    }
}