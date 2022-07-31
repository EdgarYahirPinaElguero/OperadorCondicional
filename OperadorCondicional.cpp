//Ejemplo_de_los_operadores ? y :
package Clase3;
import java.util.Scanner;

public class OperadorCondicional {
	public static void main (String [] args) {
		Scanner sc = new Scanner (System.in);
		int num;
		
		System.out.println("Introduce un numero: ");
		num = sc.nextInt();
			
		System.out.println(num>=0 ? "Positivo" : "Negativo");
	}
}
