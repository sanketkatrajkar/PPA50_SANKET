// class marvellous 
// {
//    public void Display(int no )
//     {
//         try
//         {

//         int i = 0;
//         for(i = 1; i <= 10; i++)
//         {
//             System.out.println(i*no);
//             Thread.sleep(1000);
//         }
        
//     }
//          catch(Exception obj)
//          {}
//      }
// }

// class Demo extends Thread
// {
//     public marvellous obj;

//     public Demo (marvellous ref)
//     {
//         this.obj = ref;
//     }
//     public void run()
//     {
//        this.obj = ref;

//     }
// }

// class Hello extends Thread
// {
//     public marvellous obj;

//     public Demo (marvellous ref)
//     {
//         this.obj = ref;
//     }
//     public void run()
//     {
//          obj.Display(5);
//     }
// }

// class multi10
// {
//     public static void main(String Arg[])
//     {
//       marvellous mobj = new marvellous();

//       Demo dobj = new Demo(mobj);
//       Hello hobj = new Hello(mobj);

//       dobj.start();
//       hobj.start();
//     }
// }