import java.util.*;
class VectorExample1
{
    public static void main(String args[])
    {
	Vector vec = new Vector(4);	//creatingan empty vector with initial capacity 4
	vec.add("Tiger");	//Adding elements to a vector
	vec.add("Lion");
	vec.add("Dog");
	vec.add("Elephant");
	System.out.println("Size is : "+vec.size());
	System.out.println("Default capacity is : "+vec.capacity());
	System.out.println("Vector elements is : "+vec);	//Display vector elements
	vec.addElement("Rat");
	vec.addElement("Cat");
	vec.addElement("Deer");
	System.out.println("Size after addition : "+vec.size());
	System.out.println("Capacity after addition is : "+vec.capacity());	//Display vector elements again
	System.out.println("Elements are : "+vec);
	if(vec.contains("Tiger"))
	{
	   System.out.println("Tiger is present at the index"+vec.indexOf("Tiger"));
	}
	else
	{
	   System.out.println("Tiger is not present in the list.");
	}
	System.out.println("The first animal of the vector is = "+vec.firstElement());	//get the last element
	System.out.println("The last animal of the vector is = "+vec.lastElement());	//get the last element
    }
}