public class GirlTest {
    public static void main(String[] args) {
        Girl[] girls = {new Girl("갑순이"), new GoodGirl("가영이"), new BestGirl("현경이")};

        for (Girl g : girls)
            g.show();
    }
}
