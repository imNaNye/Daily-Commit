import java.util.Scanner;

public class Practice1 {
    public static void main(String[] args) {
        int numOfStudents = 0;
        int[] scores;
        Scanner in = new Scanner(System.in);

        System.out.println("학생 수를 입력하세요");
        numOfStudents = in.nextInt();
        scores = new int[numOfStudents];

        System.out.println(numOfStudents + "명의 학생 성적을 입력하세요.");
        for (int x = 0; x < numOfStudents ; x++){
            scores[x] = in.nextInt();
        }

        System.out.println(numOfStudents + "명의 학생 성적은 다음과 같습니다.");
        for (int x : scores) {
            if (x >= 90)
                System.out.println(Grades.A); //println()메서드에서는 자동으로 String으로 변환되기 때문에 toString()메서드에 따라 이름이 반환됨
            else if (x >= 80)
                System.out.println(Grades.valueOf("B")); //문자열 "B"에 대응하는 열거 타입 상수를 반환
            else if (x >= 70)
                System.out.println(Grades.valueOf("C"));
            else
                System.out.println(Grades.valueOf("F"));
        }
    }
}
enum Grades{
    A("최우수"), B("우수"), C("보통"), F("미흡");

    private String s;


    Grades(String s){
        this.s = s;
    }

    public String toString(){
        return this.s;
    }
}