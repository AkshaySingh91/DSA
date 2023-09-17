import java.util.*;

class hello{
    public static void main(String arug[]){
        Scanner input = new Scanner (System.in);

        int a,b;
        System.out.print("Enter a : ");
        a = input.nextInt();

        System.out.print("Enter b : ");
        b = input.nextInt();

        System.out.println("Sum of "+a+" and "+b+" is "+a*b);
        
        input.close();
        
        float x = input.nextFloat();
        float y = input.nextFloat();

        System.out.println(x+" divide by "+y+ " is "+ x/y);
        
    }
    
}