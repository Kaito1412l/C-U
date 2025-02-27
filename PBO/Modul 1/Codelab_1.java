import java.time.LocalDateTime;
import java.util.Scanner;

public class Codelab_1{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Masukkan Nama: ");
        String nama = scan.nextLine();

        System.out.print("Masukkan Jenis Kelamin (L/P): ");
        char kelamin = scan.next().charAt(0);
        String jenis_kelamin="NULL";

        switch (kelamin){
            case 'L':
            case 'l':
                jenis_kelamin = "Laki-laki";
                break;
            case 'P':
            case 'p':
                jenis_kelamin = "Perempuan";
                break;
            default: jenis_kelamin = "Non Binary";}

        System.out.print("Masukkan Tahun Lahir: ");
        int lahir = scan.nextInt();
        int umur = LocalDateTime.now().getYear() - lahir;

        System.out.println("\nData Diri");
        System.out.printf("Nama          : %s\n", nama);
        System.out.printf("Jenis Kelamin : %s\n", jenis_kelamin);
        System.out.printf("Umur          : %d\n", umur);

        scan.close();
    }
}