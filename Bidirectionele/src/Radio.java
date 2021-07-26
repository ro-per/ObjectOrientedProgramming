
public class Radio {
	private String naam;
	private Micro micro = null;

	public Radio(String n) {
		naam = n;
	}

	public Micro getMicro() {
		return micro;
	}

	public void setMicro(Micro m) {
		if (micro != m) {
			if (micro == null) {
				micro = m;
				m.setRadio(this);
			} else if (m == null) {
				Micro tmpMicro = micro;
				micro = null;
				tmpMicro.setRadio(null);
			} else {
				micro.setRadio(null);
				m.setRadio(null);
				setMicro(null);
			}
		}
	}
}
