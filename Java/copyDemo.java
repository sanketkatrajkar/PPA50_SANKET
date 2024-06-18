class student implements Cloneable
{

    public String Name;
    public int Marks;
    public int Age;
    public student (String str, int A ,int B)
    {
        this.Name = str;
        this.Marks = A;
        this.Age = B;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class copyDemo
{
    public static void main(String Arg[])
    {
        try
        {
       student sobj = new student("amit",74,83);
       
       System.out.println("name of the student :"+sobj.Name);
       System.out.println("marks of the student :"+sobj.Marks);
       System.out.println("age of the student:"+sobj.Age);

       student sobjx = (student)sobj.clone();
       System.out.println("name  of the student :"+sobj.Name);
       System.out.println("marks of the student :"+sobj.Marks);
       System.out.println("age of the student:"+sobj.Age);

        }
        catch(Exception obj)
         {}
    
    }
}