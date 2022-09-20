import java.util.Scanner;
public class PS08 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();

        feeling(s);
    }

    public static void feeling(String a){
        if (a.equalsIgnoreCase(DAYS.MON.toString()))
            System.out.println("싫다");
        else if (a.equalsIgnoreCase(DAYS.FRI.toString()))
            System.out.println("좋다");
        else if (a.equalsIgnoreCase(DAYS.SAT.toString()) || a.equalsIgnoreCase(DAYS.SUN.toString()))
            System.out.println("최고");
        else
            System.out.println("그저 그렇다");

    }
}
enum DAYS{
    MON("monday"), TUE("tuesday"), WED("wednesday"),THUR("thursday"), FRI("friday"), SAT("saturday"), SUN("sunday");

    private String s;
    private DAYS(String s){
        this.s = s;
    }
}