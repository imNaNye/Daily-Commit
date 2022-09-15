public class EnumDemo {
    public static void main(String[] args) {
        Gender gender = Gender.FEMALE;
        if (gender == Gender.MALE)
            System.out.println(Gender.MALE+"은 병역 의무가 있다.");
        else
            System.out.println(Gender.FEMALE + "은 병역 의무가 없다.");

        for (Gender g : Gender.values())//MALE("남성"), FEMALE("여성")을 차례로 반환
            System.out.println(g.name());//열거 타입 상수 이름을 반환

        System.out.println(Gender.valueOf("MALE"));//열거타입 상수를 println()메서드로 출력 시 toString()메서드에 의해 문자열로 변환된 후 출력됨.
    }
}
enum Gender{
    MALE("남성"), FEMALE("여성"); //new Gender("남성")이라고 하지 않는다.

    private String s;
    Gender(String s){
        this.s = s;
    }

    public String toString(){
        return s;
    }
}
