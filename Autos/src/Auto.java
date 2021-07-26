public class Auto {
	private String aankoopPrijs;
	private String onderhoudKost;
	private String aantalDeuren;
	private String aantalZitplaatsen;
	private String kofferVolume;
	private String veiligheid;
	private String klasse;

	public Auto(String[] specificaties) {
		aankoopPrijs = specificaties[0];
		onderhoudKost = specificaties[1];
		aantalDeuren = specificaties[2];
		aantalZitplaatsen = specificaties[3];
		kofferVolume = specificaties[4];
		veiligheid = specificaties[5];
		klasse = specificaties[6];
	}

	public String getAankoopPrijs() {
		return aankoopPrijs;
	}

	public String getOnderhoudKost() {
		return onderhoudKost;
	}

	public String getAantalDeuren() {
		return aantalDeuren;
	}

	public String getAantalZitplaatsen() {
		return aantalZitplaatsen;
	}

	public String getKofferVolume() {
		return kofferVolume;
	}

	public String getVeiligheid() {
		return veiligheid;
	}

	public String getKlasse() {
		return klasse;
	}

	@Override
	public String toString() {
		return "Auto{" + "aankoopPrijs='" + aankoopPrijs + '\'' + ", onderhoudPrijs='" + onderhoudKost + '\''
				+ ", aantalDeuren='" + aantalDeuren + '\'' + ", aantalPersonen='" + aantalZitplaatsen + '\''
				+ ", kofferRuimte='" + kofferVolume + '\'' + ", veiligheid='" + veiligheid + '\'' + ", klasse='"
				+ klasse + '\'' + '}';
	}

	public void print() {
		System.out.println(toString());
	}
}
