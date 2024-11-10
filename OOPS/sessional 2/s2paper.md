Q1(b): Explain keywords in public static void main(String[] args)
public: An access modifier allowing the method to be called from outside the class by the Java runtime.
static: Allows the method to be called without creating an instance of the class. The JVM calls this method directly.
void: Indicates that the method does not return any value.
main: The entry point of any Java application; the JVM looks for this method to start execution.
String[] args: An array of String arguments passed from the command line. args can contain inputs specified by the user.

Q1(c): Difference between "Platform Independent" and "Architecture-neutral" in Java
Platform Independent: Java code is compiled into bytecode by the Java compiler. This bytecode can be executed on any platform that has a Java Virtual Machine (JVM), making Java applications platform-independent.
Architecture-neutral: Java bytecode is designed to be executed on any processor, with the JVM providing the necessary translation. This feature allows Java programs to be run on various architectures without modification.