public class Switch4Demo {
    public static void main(String[] args) {

    }
    static void whoIsIt(String bio){
        String kind = switch (bio){
            case "호랑이", "사자" -> "포유류";
            case "독수리", "참새" -> "조류";
            case "고등어", "연어" -> "어류";
            default -> {
                System.out.print("아쿠!");
                yield "...";
            }
       }; //switch문을 연산하여 kind에 대입하는 하나의 실행문이므로 세미콜론 필요함
    }
}
