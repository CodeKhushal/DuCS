class Test{
    int a;		//default access
    public int b;	//public  access
    private int c;	//private access

    //methods to access c
    void setc(int i)
    {
        c = i;
    }

    int getc()
    {
        return this.c;
    }

    void manipulate(int x, int y)
    {
        x +=10;
        y  *=10;
        System.out.println("x and y after manipulation in manipulate() method:  " + x + ",  " + y);
    }

    void manipulate(Test o)
    {
        o.a +=10;
        o.b  *=10;
        o.setc(50);
    }
}

class AccessTest{
    public static void main(String[] args)
    {
        System.out.println();
        System.out.println("Showing difference between access specifiers");
        Test ob = new Test();

        ob.a = 10;		//a has default access so can be set directly using object
        ob.b = 20;		//b has public access so can be set directly using object
        //ob.c = 30;	//This will cause an ERROR as c has private access and can be accessed from outside of class only by using some default or public member of that class
        //To test, just uncomment above statement and then compile it.

        //To set c, we have created a function setc();
        ob.setc(40);

        System.out.println("a, b and c :  " + ob.a + ",  " + ob.b  +  ",  " + ob.getc());

        System.out.println();
        System.out.println("Showing the effect of manipulation on a variable and a class object");
        System.out.println();
        System.out.println("Showing the effect of manipulation on variables ");

        int x = 10;
        int y = 20;
        System.out.println("x and y before manipulation:  " + x + ",  " + y);
        ob.manipulate(x,y);
        System.out.println("x and y after manipulation in main() method:  " + x + ",  " + y);

        System.out.println();

        Test ob1 = new Test();
        ob1.a = 20;
        ob1.b = 30;
        ob1.setc(100);
        System.out.println("Showing the effect of manipulation on a class object");
        System.out.println("a, b and c before manipulation:  " + ob1.a + ",  " + ob1.b  +  ",  " + ob1.getc());
        ob1.manipulate(ob1);
        System.out.println("a, b and c after manipulation:  " + ob1.a + ",  " + ob1.b  +  ",  " + ob1.getc());
    }
}
