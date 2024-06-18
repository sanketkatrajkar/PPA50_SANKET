class Base
{
   public int A,B;
  
  public void Fun()
   {
    System.out.println("inside Base fun");
   }
   public void Gun()
   {
    System.out.println("inside Base gun");
   }
   public void Sun()
   {
    System.out.println("inside Base sun");
   }
   public void Run()
   {
    System.out.println("inside Base run");
   }

}

class Derived extends Base  
{
   public int X,Y;
   public void Gun()
   {
    System.out.println("insede derived gun");
   }
   public void Run()
   {
    System.out.println("insede derived run");
   }
   public void Mun()
   {
    System.out.println("insede derived Mun");
   }
}

class RMD
{
   public static void main(String Sanket[])
   {

    Base bobj = new Derived();
    bobj.Fun();
    bobj.Sun();
    bobj.Run();
    bobj.Gun();

    // bobj.Mun(); //ERROR OR NOT ALLOWED 
   }
}