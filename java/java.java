import java.util.*;
public class java {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[200009];
        int n = sc.nextInt();//输入
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        String s = "a";
        System.out.println(s);
        s += 'a';
        System.out.println(s);
        System.out.println();
        System.out.println("Hello World");
    } 
}