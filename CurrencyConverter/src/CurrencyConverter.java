import java.util.*;
import java.text.DecimalFormat;

public class CurrencyConverter {

    public static void main(String[] args) {

        double amount, dollar, pound, code, euro, yen, ringgit, rupee;

        DecimalFormat f = new DecimalFormat("##.##");

        Scanner sc = new Scanner(System.in);
        System.out.println();
        System.out.println("******* CURRENCT CONVERTER *******                    ");
        System.out.println();

        System.out.println("Which Currency You Want To Convert ? ");

        System.out.println("1:Ruppe (INR) \n2:US Dollar (USD)\n3:Pound (GBP) \n4:Euro (EUR)\n5:Yen (JPY)\n6:Ringgit (MYR)");
        code = sc.nextInt();

        System.out.println();

        System.out.println("How much Money you want to convert ?");
        amount = sc.nextFloat();

        System.out.println();

        // For amounts Conversion
        if (code == 1) {

            dollar = amount / 70;
            System.out.println( amount + " Rupee is equal to : " + f.format(dollar) + " Dollar");

            pound = amount / 88;
            System.out.println( amount + " Rupee is equal to : " + f.format(pound) + " Pound");

            euro = amount / 80;
            System.out.println( amount + " Rupee is equal to : " + f.format(euro) + " Euro");

            yen = amount / 0.63;
            System.out.println( amount + " Rupee is equal to : " + f.format(yen) + " Yen");

            ringgit = amount / 16;
            System.out.println( amount + " Rupee is equal to : " + f.format(ringgit) + " ringgit");
        }

        // For Dollar Conversion
        else if (code == 2) {

            rupee = amount * 70;
            System.out.println( amount + " Dollar is equal to : " + f.format(rupee) + " Ruppes");

            pound = amount * 0.78;
            System.out.println( amount + " Dollar is equal to : " + f.format(pound) + " Pound");

            euro = amount * 0.87;
            System.out.println( amount + " Dollar is equal to : " + f.format(euro) + " Euro");

            yen = amount * 111.087;
            System.out.println( amount + " Dollar is equal to : " + f.format(yen) + " Yen");

            ringgit = amount * 4.17;
            System.out.println( amount + " Dollar is equal to : " + f.format(ringgit) + " ringgit");
        }

        // For Pound Conversion
        else if (code == 3) {

            rupee = amount * 88;
            System.out.println( amount + " pound is equal to : " + f.format(rupee) + " Ruppes");

            dollar = amount * 1.26;
            System.out.println( amount + " pound is equal to : " + f.format(dollar) + " Dollar");

            euro = amount * 1.10;
            System.out.println( amount + " pound is equal to : " + f.format(euro) + " Euro");

            yen = amount * 140.93;
            System.out.println( amount + " pound is equal to : " + f.format(yen) + " Yen");

            ringgit = amount * 5.29;
            System.out.println( amount + " pound is equal to : " + f.format(ringgit) + " ringgit");
        }

        // For Euro Conversion
        else if (code == 4) {

            rupee = amount * 80;
            System.out.println( amount + " euro is equal to : " + f.format(rupee) + " Ruppes");

            dollar = amount * 1.14;
            System.out.println( amount + " euro is equal to : " + f.format(dollar) + " Dollar");

            pound = amount * 0.90;
            System.out.println( amount + " euro is equal to : " + f.format(pound) + " Pound");

            yen = amount * 127.32;
            System.out.println( amount + " euro is equal to : " + f.format(yen) + " Yen");

            ringgit = amount * 4.78;
            System.out.println( amount + " euro is equal to : " + f.format(ringgit) + " ringgit");
        }

        // For Yen Conversion
        else if (code == 5) {

            rupee = amount * 0.63;
            System.out.println( amount + " yen is equal to : " + f.format(rupee) + " Ruppes");

            dollar = amount * 0.008;
            System.out.println( amount + " yen is equal to : " + f.format(dollar) + " Dollar");

            pound = amount * 0.007;
            System.out.println( amount + " yen is equal to : " + f.format(pound) + " Pound");

            euro = amount * 0.007;
            System.out.println( amount + " yen is equal to : " + f.format(euro) + " Euro");

            ringgit = amount * 0.037;
            System.out.println( amount + " yen is equal to : " + f.format(ringgit) + " ringgit");
        }

        // For Ringgit Conversion
        else if (code == 6) {

            rupee = amount * 16.8;
            System.out.println( amount + " ringgit is equal to : " + f.format(rupee) + " Ruppes");

            dollar = amount * 0.239;
            System.out.println( amount + " ringgit is equal to : " + f.format(dollar) + " dollar");

            pound = amount * 0.188;
            System.out.println( amount + " ringgit is equal to : " + f.format(pound) + " pound");

            euro = amount * 0.209;
            System.out.println( amount + " ringgit is equal to : " + f.format(euro) + " euro");

            yen = amount * 26.63;
            System.out.println( amount + " ringgit is equal to : " + f.format(yen) + " yen");
        }

        else {
            System.out.println("Invalid input");
        }

        System.out.println();

        System.out.println("THIS IS OUR MINI-PROJECT UNDER SUBJECT OPP-JAVA");
        System.out.println("             PROF. SUNIT PARMAR..                         ");
    }

}