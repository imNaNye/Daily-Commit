public class MemberClassDemo {
    private String secret = "비공개";
    String s = "외부";

    class MemberClass{
        String s = "내부";

        public void show1(){
            System.out.println("내부 클래스");
            System.out.println(secret); // 외부 클래스의 private 멤버에 접근 가능

            System.out.println(s);

            System.out.println(MemberClassDemo.this.s); // 외부 클래스 참조
        }

        //static String ss = "히힛 안되지"; 내부 클래스 내부에 정적 변수 / 메서드 포함 불가.
    }

    public static void main(String[] args) {
        MemberClassDemo m = new MemberClassDemo();
        MemberClassDemo.MemberClass m1 = m.new MemberClass(); //외부 클래스 객체를 이용하여 내부 클래스 객체를 생성

        System.out.println(m1.s);
        m1.show1();
    }
}
