import java.util.*;
class Palindrome
{
    Palindrome(int num)
    {
	int sod = 0,rev = 0,cont = 0,n,d=0,fldgt;
	n = num;
	fldgt = num % 10;
	while(num > 0)
	{
	    d = num % 10;
	    sod = sod + d;
	    rev = rev * 10 + d;
	    cont++;
	    num = num / 10;
	}
	fldgt = fldgt + d;
	System.out.println("Sum of Digits is: "+sod);
	System.out.println("Reverse of Number is: "+rev);
	System.out.println("Total number of Digits is: "+cont);
	System.out.println("Sum of First and Last Digit is: "+fldgt);
	if(n == rev)
	{
	  System.out.println(n+" is a Palindrome number");
	}
	else
	{
	   System.out.println(n+" is not a Palindrome number");
	}
    }
}
class PalindromeConstructor
{
    public static void main(String str[])
    {
	int num;
	Scanner sc=new Scanner(System.in);
	System.out.print("\nEnter any integer number: ");
	num = sc.nextInt();
	Palindrome ob=new Palindrome(num);
    }
}