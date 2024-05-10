import java.util.Scanner;
class Voting
{
  public static void main(String...args)
  {
	int age;
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter the age of person: ");
	age = sc.nextInt();
	if(age >= 18)	
	  System.out.println("He/She is eligible for voting");
	System.out.println("Hello");
	if(age < 18)
	  System.out.println("He/She is not eligible for voting");
  }
}