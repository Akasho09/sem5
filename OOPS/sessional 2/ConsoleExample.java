public class ConsoleExample {
    public static void main(String[] args) {
        java.io.Console console = System.console();
        
        if (console != null) {
            String name = console.readLine("Enter your name: ");
            System.out.println("Hello, " + name + "!");
        } else {
            System.out.println("Console is not available.");
        }
    }
}

