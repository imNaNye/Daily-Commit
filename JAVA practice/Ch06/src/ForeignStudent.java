public class ForeignStudent extends Student{
    protected String country;
    public String getCountry(){
        return country;
    }
    public void setCountry(String country){
        this.country = country;
    }
    public ForeignStudent(){
        country = "한국";
    }

    public void show(){
        System.out.println("외국학생[이름 : "+name+",나이 : "+age+",학번 : "+number+",국적 : "+country+"]");
    }
}
