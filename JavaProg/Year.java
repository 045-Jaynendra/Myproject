import java.util.Scanner;
class Age
{
  public static void main(String...args)
  {
	int age1,age2;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter the age of both Ram and Mohan: ");
	age1 = sc.nextInt();
	age2 = sc.nextInt();
	if(age1 == age2)
	{
	  System.out.println("Both are born in Same Year");
	}
	if(age1 != age2)
	{
	  System.out.println("Both are born in Different year");
	}
  }
}