public class Person {
    void name(){}
    protected void number() {}
    void weight() {}
    static void show(){}
    private void secret(){}
}

class Student extends Person{
    public void name(){}
    @Override
    void number(){}
    static void weight(){}
    static void show(){}
    private void secret(){}
}
