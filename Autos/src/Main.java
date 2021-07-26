import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class Main {

	public static void main(String[] args) throws Lambda.NotFoundException {

		Scanner sc = new Scanner(System.in);
		// VARIABELEN
		boolean exitMenu = false, exitProg = false;
		List<Auto> collectie = new ArrayList<>();
		List<Auto> autoSelectie, temp;
		String lijn, file_name = "autos.txt";
		String[] gegevens;
		BufferedReader reader = null;
		Lambda criteria = Lambda.getInstance();
		int invoer = 0;

		// INLEZEN VAN DE FILE NAAR COLLECTIE VAN AUTO'S
		try {
			reader = new BufferedReader(new FileReader(file_name));
			while ((lijn = reader.readLine()) != null) {
				gegevens = lijn.split(",");
				collectie.add(new Auto(gegevens));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		// CORE VAN HET PROGRAMMA
		while (!exitProg) {
			// INIT
			printMenu();
			autoSelectie = new ArrayList<>(collectie);
			// KEUZE
			while (!exitMenu) {
				// LEES KEUZE IN
				invoer = Integer.parseInt(sc.nextLine());
				// NIET != 0 --> maak selectie
				if (invoer != 0) {
					// maak selectie
					temp = autoSelectie.stream().filter(criteria.getPredicate(invoer)).collect(Collectors.toList());
					// kan beter TODO
					autoSelectie = temp;

					// print selectie
					System.out.println("Huidig aanbod - ");
					autoSelectie.forEach(Auto::print);
				}
				// INVOER ==0 --> exit menu
				else {
					System.out.println("Exit programma: 0");
					System.out.println("Nieuw programma: 1");
					exitMenu = true;
					invoer = 0; // standaard exit

					try {
						invoer = Integer.parseInt(sc.nextLine());
						// INVOER ==0 --> exit programma

					} catch (Exception e) {
						e.printStackTrace();
					}
					if (invoer == 0) {
						exitProg = true;
					}
				}
				System.out.println();
			}
			exitMenu = false;
		}
		sc.close();
		System.out.println("Programmma afgesloten");
	}

	public static void printMenu() {

		String file_name = "menu.txt";
		BufferedReader reader = null;
		String lijn;
		try {
			reader = new BufferedReader(new FileReader(file_name));
			while ((lijn = reader.readLine()) != null) {
				System.out.println(lijn);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
