class Base 
{

    public int A,B;
    public Base ()
    {
        System.out.println("inside the base constuctor");
        this.A = 10;
        this.B = 20;
    }
    public void fun()
    {
        System.out.println("inside the base fun"); 
    }
}
class Derived extends Base 
{
    public int X,Y;
    public Derived(int i, int j)
    {
        super();
        System.out.println("insede the derived constuctor");
        this.X = i ;
        this.Y = j;
    }
    public void gun()
    {
        System.out.println("insede the derived constuctor");
        super.fun();
        System.out.println("value of the A:"+super.A);
        System.out.println("value of the A:"+this.X);
    }
}
class Keyword
{
    public static void main(String Arg[])
    {
       Derived dobj =new Derived (11,32);
       dobj.gun();
    }
}