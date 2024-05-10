import java.util.Scanner;
// import System.out;
public class first {
	public static void main(String[] arg) {
		System.out.println("Hello Good Morning");
		Scanner sc = new Scanner(System.in);
		int x;
		x = sc.nextInt();
		sc.nextLine();
		String str = sc.nextLine();
		char ch=sc.next().charAt(0);
		float f = sc.nextFloat();
		try
		{
			System.out.println("My name is :: "+str);
			System.out.println("Value is :: " + x);
			System.out.println("Sec is :: " + ch);
			System.out.println("Marks is :: " + f);
			for (int i = 0; i < x; i++) {
				System.out.print(i + 1 + " ");
			}
			System.out.println();
			if (x < 18)
				System.out.print("You r not Valid for Vote");
			else
				System.out.println("You r Valid for Vote");
			System.out.println();
			while(x--!=0)
				System.out.print(x+" ");
		}
		catch(Exception e)
		{
			System.out.print("=========================================>Limit Exceed");
		}
		finally
		{
			System.out.print("Limit Exceed");
			sc.close();
		}
	}
}