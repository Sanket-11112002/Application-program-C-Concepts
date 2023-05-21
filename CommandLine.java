class CommandLine
{
    public static void main(String arg[])
    {
        System.out.println(" Demonstration of command line");

        int No1 = Integer.parseInt(arg[0]);
        int No2 = Integer.parseInt(arg[1]);

        int Ans = No1 + No2;
        System.out.println("Number of command line arguments"+arg.length);

        System.out.println("Addition is :"+Ans);
    }
}

// javac CommandLine.java
// java CommandLine 11 21