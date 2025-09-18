
public class Clas {
    static class Hello{
        int a;
        int b;
        Hello (){
            System.out.println("calling Hello class");
        }
        void print(int a,int b){
            this.a=a;
            this.b=b;
            System.out.println(a+b);
        }
}
    public static void main(String[] args) {
        // Clas h1=new Clas();
        // Hello h=h1.new Hello();
        Hello h=new Hello();
        h.print(3, 8);
    }
}
