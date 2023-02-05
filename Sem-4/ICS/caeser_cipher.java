import java.util.Scanner;

public class caeser_cipher {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a message: ");
        String message = sc.nextLine();

        System.out.print("Enter the shift key (1-25): ");
        int shift = sc.nextInt();

        String cipherText = encrypt(message, shift);
        System.out.println("Encrypted message: " + cipherText);

        String plainText = decrypt(cipherText, shift);
        System.out.println("Decrypted message: " + plainText);

        sc.close();
    }

    public static String encrypt(String message, int shift) {
        StringBuilder cipherText = new StringBuilder();

        for (int i = 0; i < message.length(); i++) {
            char c = message.charAt(i);

            if (Character.isLetter(c)) {
                c = (char) (c + shift);

                if (Character.isLowerCase(message.charAt(i)) && c > 'z') {
                    c = (char) (c - 26);
                } else if (Character.isUpperCase(message.charAt(i)) && c > 'Z') {
                    c = (char) (c - 26);
                }
            }

            cipherText.append(c);
        }

        return cipherText.toString();
    }

    public static String decrypt(String cipherText, int shift) {
        return encrypt(cipherText, -shift);
    }
}
