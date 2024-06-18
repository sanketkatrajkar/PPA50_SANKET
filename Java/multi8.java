class marvellous 
{
    public void Display(int no )
    {
        try
        {

        int i = 0;
        for(i = 1; i <= 10; i++)
        {
            System.out.println(i*no);
            Thread.sleep(1000);
        }
        
    }
         catch(Exception obj)
         {}
     }
}

class Demo extends Thread
{
    public void run()
    {
        marvellous mobj = new marvellous();
        mobj.Display(5);

    }
}

class Hello extends Thread
{
    public void run()
    {
         marvellous mobj = new marvellous();
         mobj.Display(2);
    }
}

class multi8
{
    public static void main(String Arg[])
    {
      Demo dobj = new Demo();
      Hello hobj = new Hello();

      dobj.start();
      hobj.start();
    }
}