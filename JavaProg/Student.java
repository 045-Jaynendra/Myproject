import java.util.*;
class student
{
  private int roll,age;
  private String name;
  private char gender;
  void getdata()
  {
    Scanner sc=new Scanner(System.in);
    System.out.print("Roll no.: ");
    roll=sc.nextInt();
    sc.nextLine();
    System.out.print("Name: ");
    name=sc.next();
    System.out.print("Age: ");
    age=sc.nextInt();
    System.out.print("Gender: ");
    gender=sc.next().charAt(0);
  }
  void display()
  {
    System.out.println("Roll no.: "+roll);
    System.out.println("Name: "+name);
    System.out.println("Age: "+age);
    System.out.println("Gender: "+gender);
  }
}
class std
{
  public static void main(String arg[])
  {
     int i;
     student s[];
     s = new student[3];	//Array of object
     for(i = 0; i < 3; i++)
     {
	s[i] = new student();	//creation of object
     }
     for(i = 0; i < 3; i++)
     {
       System.out.println("\nEnter details for student "+(i + 1)+":............................... ");
       s[i].getdata();
     }
     for(i = 0; i < 3; i++)
     {
       System.out.println("\nDetails of student "+(i + 1)+":............................... ");
       s[i].display();
     }
   }
}