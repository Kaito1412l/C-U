import java.util.Scanner;

public class Kegiatan_1 {
    public static void main(String[] args) {
        final String kuadmin = "admin332";
        final String kpadmin = "password332";
        final String kusiswa = "Nur Muhammad Yazid Salim";
        final String kpsiswa = "202410370110332";
        Scanner scan = new Scanner(System.in);

        String user, pass;
        System.out.println("==========Program Dimulai==========");
        System.out.println("Pilih Login:");
        System.out.println("1. Admin");
        System.out.println("2. Mahasiswa");
        System.out.print("Masukkan Pilihan: ");
        int pilihan = scan.nextInt();
        scan.nextLine();

        switch (pilihan){
            case 1:
                System.out.print("Masukkan Username: ");
                user = scan.nextLine();
                System.out.print("Masukkan Password: ");
                pass = scan.nextLine();
                if ((kuadmin.equals(user)) && (kpadmin.equals(pass)))
                   {System.out.println("\nLogin Admin Berhasil");}
                else
                   {System.out.println("\nLogin Gagal! Username atau Password Salah");}
                break;
            case 2:
                System.out.print("Masukkan Nama: ");
                user = scan.nextLine();
                System.out.print("Masukkan NIM: ");
                pass = scan.nextLine();
                if ((kusiswa.equals(user)) && (kpsiswa.equals(pass)))
                   {System.out.println("\nLogin Mahasiswa Berhasil");
                    System.out.println("Nama: " + kusiswa);
                    System.out.println("NIM: " + kpsiswa);}
                else
                   {System.out.println("\nLogin Gagal! Nama atau NIM Salah");}
                break;
        default: System.out.println("\nPilihan tidak valid"); break;}

        scan.close();
        }
    }
