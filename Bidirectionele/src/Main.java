
public class Main {
	public static void main(String[]args) {
			Radio radio1=new Radio("radio1");
			Radio radio2=new Radio("radio2");
			Micro micro1= new Micro("micro1");
			Micro micro2=new Micro("micro2");
			System.out.println("radio1: "+radio1);
			System.out.println("radio2: "+radio2);
			System.out.println("micro1: "+micro1);
			System.out.println("micro2: "+micro2);
			
			//verbind radio 1 met micro 1
			radio1.setMicro(micro1);
			System.out.println("radio1.getMicro1: "+radio1.getMicro());
			System.out.println("micro1.getRadio1: "+micro1.getMicro());
			//verbreek verbinding
			radio1.setMicro(null)
			System.out.println("radio1.getNull: "+radio1.getMicro());
			System.out.println("micro1.getNull: "+micro1.getRadio());
			//verbind radio1 met micro1
			//verbind radio1 met micro2 , micro1 moet radio null hebben
			radio1.setMicro ( micro1 ) ;
			radio1.setMicro ( micro2 ) ;
			System.out.println( "radio1.getMicro2 : "+radio1.getMicro ( ) ) ;
			System.out.println( "micro1.getNull : "+micro1.getRadio ( ) ) ;
			System.out.println( "micro2.getRadio1 : "+micro2.getRadio ( ) ) ;
			//verbind radio 1 met micro1 , radio2 met micro2
			//verbind dan radio1 met micro2
			radio1.setMi cro ( micro1 ) ;
			radio2.s etMi cro ( micro2 ) ;
			System.out.println("radio1.getMicro1 : "+radio1 . getMicro ( ) ) ;
			System.out.println(" radio2.getMicro2 : "+radio2 . getMicro ( ) ) ;
			System.out.println( "micro1.getRadio1 : "+micro1 . getRadio ( ) ) ;
			System.out.println( "micro2.getRadio2 : "+micro2 . getRadio ( ) ) ;
			radio1.setMicro( micro2 ) ;
			System.out.println( "radio1 . getMicro2 : "+radio1 . getMicro ( ) ) ;
			System.out.println( "radio2 . g etNull : "+radio2 . getMicro ( ) ) ;
			System.out.println( "micro1 . g etNull : "+micro1 . getRadio ( ) ) ;
			System.out.println( "micro2.getRadio1 : "+micro2.getRadio ( ) ) 

		}
}
