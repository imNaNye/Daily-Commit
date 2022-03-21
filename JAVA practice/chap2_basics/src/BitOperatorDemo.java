public class BitOperatorDemo {
    public static void main(String[] args) {
        System.out.printf("%x\n", ~0b0000001);
        //32비트에 대하여 16진법으로 표시
        System.out.printf("%x\n", (byte)~0b00000001);
        int i1 = -10;
        int i2 = i1 >> 1;  //-5의 값
        int i3 = i1 >>> 1; // 숫자로 취급 x, 논리로 취급.
        System.out.printf("%x\n",i1);
        System.out.printf("%x\n",i2);
        System.out.printf("%x\n",i3);
    }
}
