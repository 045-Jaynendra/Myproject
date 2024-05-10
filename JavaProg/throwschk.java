import java.util.*;
class throwschk
{
  static void abc(int ag) throws InvalidAgeException
  {
    if(ag < 18)
    {
      try
      {
        throw new InvalidAgeException();
      }
      catch(InvalidAgeException e)
      {
        System.out.println("Exception Handled.");
      }
    }
    else
    {
      System.out.println("A Voater.");
    }
  }
  public static void main(String []args)
  {
    //throwschk ob = new throwschk();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter age: ");
    int age = sc.nextInt();
    abc(age);
    
  }
}