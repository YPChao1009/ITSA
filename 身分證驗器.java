/*
 * 身分證驗器.cpp
 * Author:Yun Pei Chao 
 */
import java.io.*; 
import java.util.Scanner;

public class main1 {

	public static void main(String[] args) throws Exception  {
		
		Scanner sc = new Scanner(System.in);

		while (sc.hasNext()) {
			String s= sc.nextLine();
			String f ="ABCDEFGHJKLMNPQRSTUVXYWZIO";
			int xx = f.indexOf(s.charAt(0))+10;
			int x1 = xx/10;
			int x2 = xx%10;
			int p = x1+9*x2+Character.getNumericValue(s.charAt(8))+Character.getNumericValue(s.charAt(9));
			for(int i =1;i<8;i++)
				p+= Character.getNumericValue(s.charAt(i))* (9 -i);
			if(p%10 == 0) {
				if (sc.hasNext()) {
					System.out.println("CORRECT!!!");
				}
				else {
					System.out.print("CORRECT!!!");
			}}
			else {
				if (sc.hasNext()) {
					System.out.println("WRONG!!!");
				}
				else {
					System.out.print("WRONG!!!");
				}
			}

		} 

	}
}
