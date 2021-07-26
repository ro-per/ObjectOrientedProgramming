
public class Micro {
	private String naam;
	private Radio radio = null;

	public Micro(String n) {
		naam = n;
	}

	public Radio getRadio() {
		return radio;
	}

	public void setRadio(Radio r) {
		if (radio != r) {
			if (radio == null) {
				radio = r;
				r.setMicro(this);
			} else if (r == null) {

				Radio tmpRadio = radio;
				radio = null;
				tmpRadio.setMicro(null);
			} else {
				radio.setMicro(null);
				r.setMicro(null);
				setRadio(r);
			}
		}
	}
}
