/*
 * 正整數分解.cpp
 * Author:Yun Pei Chao 
 */
import java.util.Scanner;

public class main3 {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
        while(sc.hasNext())  
        {  
            int n = sc.nextInt();  
            System.out.println(f(n, 1));  
        }  
    }  
      
    private static int f(int n, int k)  
    {  
        if(n==k || n < 2*k)  
        {  
            return 1;  
        }  
        else  
        {  
            int num = 0;  
            for(int i = k;i < n;i++)  
            {  
                if(n - i >= i)  
                {  
                    num = num + f(n-i, i);  
                }  
            }  
            return num + 1;  
        }  
    }  
}  
