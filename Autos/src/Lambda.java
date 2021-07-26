import java.util.HashMap;
import java.util.Map;
import java.util.function.Predicate;

public class Lambda {

	private static Lambda objectLambda = new Lambda();
	private Map<Integer, Predicate<Auto>> map;

	private Lambda() {
		map = new HashMap<>();

		// AANKOOPPRIJS
		Predicate<Auto> zeerDuur = p -> p.getAankoopPrijs().equals("vhigh");
		Predicate<Auto> duur = p -> p.getAankoopPrijs().equals("high");
		Predicate<Auto> gemiddeld = p -> p.getAankoopPrijs().equals("med");
		Predicate<Auto> goedkoop = p -> p.getAankoopPrijs().equals("low");
		map.put(1, zeerDuur);
		map.put(2, duur);
		map.put(3, gemiddeld);
		map.put(4, goedkoop);

		// ONDERHOUDSKOST
		Predicate<Auto> zeerHogeKost = p -> p.getOnderhoudKost().equals("vhigh");
		Predicate<Auto> hogeKost = p -> p.getOnderhoudKost().equals("high");
		Predicate<Auto> gemiddeldeKost = p -> p.getOnderhoudKost().equals("med");
		Predicate<Auto> lageKost = p -> p.getOnderhoudKost().equals("low");
		map.put(5, zeerHogeKost);
		map.put(6, hogeKost);
		map.put(7, gemiddeldeKost);
		map.put(8, lageKost);

		// AANTAL DEUREN
		Predicate<Auto> tweeDeurs = p -> p.getAantalDeuren().equals("2");
		Predicate<Auto> drieDeurs = p -> p.getAantalDeuren().equals("3");
		Predicate<Auto> vierDeurs = p -> p.getAantalDeuren().equals("4");
		Predicate<Auto> vijfDeurs = p -> p.getAantalDeuren().equals("5more");
		map.put(9, tweeDeurs);
		map.put(10, drieDeurs);
		map.put(11, vierDeurs);
		map.put(12, vijfDeurs);

		// AANTAL ZITPLAATSEN
		Predicate<Auto> tweeZitter = p -> p.getAantalZitplaatsen().equals("2");
		Predicate<Auto> vierZitter = p -> p.getAantalZitplaatsen().equals("4");
		Predicate<Auto> meerZitter = p -> p.getAantalZitplaatsen().equals("more");
		map.put(13, tweeZitter);
		map.put(14, vierZitter);
		map.put(15, meerZitter);

		// VOLUME KOFFER
		Predicate<Auto> kleineKoffer = p -> p.getKofferVolume().equals("small");
		Predicate<Auto> gemiddeldeKoffer = p -> p.getKofferVolume().equals("med");
		Predicate<Auto> groteKoffer = p -> p.getKofferVolume().equals("big");
		map.put(16, kleineKoffer);
		map.put(17, gemiddeldeKoffer);
		map.put(18, groteKoffer);

		// VEILIGHEIDSKLASSE
		Predicate<Auto> lageVeiligheid = p -> p.getVeiligheid().equals("low");
		Predicate<Auto> gemiddeldeVeiligheid = p -> p.getVeiligheid().equals("med");
		Predicate<Auto> hogeVeiligheid = p -> p.getVeiligheid().equals("high");
		map.put(19, lageVeiligheid);
		map.put(20, gemiddeldeVeiligheid);
		map.put(21, hogeVeiligheid);

		// KLASSE
		Predicate<Auto> schroothoop = p -> p.getKlasse().equals("unacc");
		Predicate<Auto> normaal = p -> p.getKlasse().equals("acc");
		Predicate<Auto> comfortabel = p -> p.getKlasse().equals("good");
		Predicate<Auto> luxueus = p -> p.getKlasse().equals("vgood");
		map.put(22, schroothoop);
		map.put(23, normaal);
		map.put(24, comfortabel);
		map.put(25, luxueus);

	}

	public Predicate<Auto> getPredicate(int optie) throws NotFoundException {
		Predicate<Auto> resultaat = map.get(optie);
		if (resultaat == null) {
			throw new NotFoundException(optie + " niet gevonden");
		}

		return resultaat;
	}

	public static Lambda getInstance() {
		return objectLambda;
	}

	public void printKeys() {
		for (Integer key : map.keySet()) {
			System.out.println(key);
		}
	}

	// @SuppressWarnings("serial")
	class NotFoundException extends Exception {
		public NotFoundException() {

		}

		public NotFoundException(String message) {
			super(message);
		}

		public NotFoundException(Throwable cause) {
			super(cause);
		}

		public NotFoundException(String message, Throwable cause, boolean enableSuppresion,
				boolean writableStackTrace) {
			super(message, cause, enableSuppresion, writableStackTrace);
		}
	}
}
