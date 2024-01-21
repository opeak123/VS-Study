package String;
public class MyClass {
    
    public static void main(String[] args) {
        
        String name = "java jit runtime la.";

        System.out.println(name.length());
        System.err.println(name.toLowerCase());

        System.out.println(!name.contains(" "));
        System.out.println(name.indexOf("runtime"));

        System.out.println(name.startsWith("j"));
        System.out.println(name.isEmpty());
        System.out.println(name.endsWith("."));
    }
}
