public class PS01 {

    public static void main(String[] args) {
        String s1 = new String("cccc iasmv c");
        System.out.println(countChar(s1,'c'));
    }
    static int countChar(String s, char c){
        int sLength = s.length();
        int cQuantity = 0;
        for ( int i = 0; i < sLength ; i++){
            if (s.charAt(i)==c)
                cQuantity++;
        }
        return cQuantity;
    }
}
