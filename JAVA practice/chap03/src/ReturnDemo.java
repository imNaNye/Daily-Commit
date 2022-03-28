public class ReturnDemo {
    public static void main(String[] args) {
        printScore(99);
        printScore(-10);
    }

    static void printScore(int score){
        if (score < 0 || score > 100){
            System.out.println("오류: "+ score);
            return;}
        System.out.println("점수 : " + score);
    }
}
