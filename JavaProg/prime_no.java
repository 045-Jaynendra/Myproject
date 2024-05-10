import java.util.*;
class prime_no
{
    public static void main(String str[])
    {
	int i,a,d=0;
	Scanner sc = new Scanner(System.in);
	i = 2;
	System.out.print("Enter any integer no. which you check prime or not: ");
	a = sc.nextInt();
	while(i < a)
	{
	  if(a % i == 0)
	  {
	    d = 1;
	    break;
	  }
	  i++;
	}
	if(d == 0)
	{
 	  System.out.println(a+" is a prime number.");
	}
	else
	{
	  System.out.println(a+" is not a prime number."); 
	}
    }
}