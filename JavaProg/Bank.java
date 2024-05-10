import java.util.*;
class bank
{
  private String Name;
  private long Account_no;
  private char Type_of_account;
  private float Balance;
  Scanner sc = new Scanner(System.in);
  public bank()
  {
    Name = "NULL";
    Account_no = 100001;
    Type_of_account = 'S';
    Balance = 1000;
  }
  public void New_Account()
  {
    
    System.out.print("Name: ");
    Name = sc.nextLine();
    System.out.print("Account no.: ");
    Account_no=sc.nextLong();
    System.out.print("Types of Account: ");
    Type_of_account=sc.next().charAt(0);
    System.out.print("Balance: ");
    Balance=sc.nextFloat();
    if(((Type_of_account == 'c' || Type_of_account == 'C') && Balance < 3000) || ((Type_of_account == 's' || Type_of_account == 'S') && Balance < 1000))
    {
      
    }
  }
  public void Deposit()
  {
    float f;
    System.out.print("How many amount you want to Deposit on your account: ");
    f=sc.nextFloat();
    Balance = Balance + f;
  }
  public void Withdrawal()
  {
    float f=0;
    if(((Type_of_account == 'c' || Type_of_account == 'C') && Balance >= 3000) || ((Type_of_account == 's' || Type_of_account == 'S') && Balance >= 1000))
    {
      System.out.print("How many amount you want to Withdraw from your account: ");
      f=sc.nextFloat();
      Balance = Balance - f;
    }
    else
    if(((Type_of_account == 'c' || Type_of_account == 'C') && Balance < 3000) || ((Type_of_account == 's' || Type_of_account == 'S') && Balance < 1000))
    {
      System.out.print("Your Balance is below "+Balance);
    }
  }
  public void Display()
  {
    System.out.println("Name: "+Name);
    System.out.println("Account no.: "+Account_no);
    System.out.println("Types of Account: "+Type_of_account);
    System.out.println("Balance: "+Balance);
  }
}
class Bank_Detail
{
  public static void main(String arg[])
  {
    bank ob=new bank();
    System.out.println("Enter Details of Bank Accont Holder...............");
    ob.New_Account();
    ob.Deposit();
    ob.Withdrawal();
    ob.Display();
  }
}