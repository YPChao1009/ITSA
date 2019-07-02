/*
 * 質數判別.java
 * Author:Yun Pei Chao 
 */
import java.util.Scanner;
 
public class Main{
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext()){
            int a=scanner.nextInt();
            boolean tf=true;
            for(int i=2;i<(a/2);i++){
                if(a%i==0){tf=false;}
            }
            if(tf){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
         
        scanner.close();
    }
 
}