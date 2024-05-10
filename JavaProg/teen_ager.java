import java.util.*;
class teen_ager
{
    public static void main(String str[])
    {
	int age;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter age of person: ");
	age = sc.nextInt();
	if(age >= 13 && age <= 19)
	{
	  System.out.print("He/She is teen ager person");
	}
	else
	{
	    System.out.print("He/She is not a teen ager person");
	}
    }
}