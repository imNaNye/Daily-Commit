import java.util.Scanner;

public class Week4_20201458 {
    public static double celsiusToFahrenheit(double celsius){
        return celsius * 1.8 + 32;
    }
    public static double fahrenheitToCelsius(double fahrenheit){
        return (fahrenheit - 32) / 1.8;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String source;
        double cel, fah;
        System.out.println("Hello!");
        while(true){
            System.out.print("Please choose a source unit (C,F) or type 'exit' to quit : ");
            source = in.nextLine();
            if (source.equalsIgnoreCase("exit"))
                break;
            else if (source.equalsIgnoreCase("F")){
                System.out.print("Enter the temperature in Fahrenheit: ");
                fah = in.nextDouble();
                cel = fahrenheitToCelsius(fah);
                System.out.println(fah + " Fahrenheit is " + cel + " Celsius.\n");
            }
            else if (source.equalsIgnoreCase("C")){
                System.out.print("Enter the temperature in Celsius: ");
                cel = in.nextDouble();
                fah = celsiusToFahrenheit(cel);
                System.out.println(cel + " Celsius is " + fah + " Fahrenheit.\n");
            }
        }
        System.out.println("Good bye!");
    }
}
