import java.util.Scanner;

public class StudentRegistration {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("=============================================");
        System.out.println("   STUDENT REGISTRATION STATUS CHECKER");
        System.out.println("=============================================");

        System.out.print("\nEnter student name: ");
        String name = scanner.nextLine().trim();

        System.out.print("Enter number of registered units: ");
        int units = scanner.nextInt();

        String status;
        if (units > 7) {
            status = "Overload - Approval Required";
        } else {
            status = "Registration Accepted";
        }

        System.out.println("\n=============================================");
        System.out.println("           REGISTRATION SUMMARY");
        System.out.println("=============================================");
        System.out.println("  Student Name : " + name);
        System.out.println("  Units        : " + units);
        System.out.println("  Status       : " + status);
        System.out.println("=============================================");

        scanner.close();
    }
}
