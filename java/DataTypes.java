public class DataTypes {
    // Constants for section titles
    private static final String SIZE_TITLE = "Size of Data Types in Java";
    private static final String RANGE_TITLE = "The Range of Data Types in Java";

    public static void main(String[] args) {
        // Displaying sizes of data types
        printSection(SIZE_TITLE);
        printSizeInfo();

        // Displaying ranges of data types
        printSection(RANGE_TITLE);
        printRangeInfo();
    }

    // Helper method to print section titles
    private static void printSection(String title) {
        System.out.println(title);
        System.out.println("===========================");
    }

    // Helper method to print sizes of data types
    private static void printSizeInfo() {
        System.out.printf("Size of byte = %d Bytes%n", Byte.BYTES);
        System.out.printf("Size of short = %d Bytes%n", Short.BYTES);
        System.out.printf("Size of int = %d Bytes%n", Integer.BYTES);
        System.out.printf("Size of long = %d Bytes%n", Long.BYTES);
        System.out.printf("Size of float = %d Bytes%n", Float.BYTES);
        System.out.printf("Size of double = %d Bytes%n", Double.BYTES);
        System.out.println();
    }

    // Helper method to print ranges of data types
    private static void printRangeInfo() {
        System.out.printf("Range of byte: %d to %d%n", Byte.MIN_VALUE, Byte.MAX_VALUE);
        System.out.printf("Range of short: %d to %d%n", Short.MIN_VALUE, Short.MAX_VALUE);
        System.out.printf("Range of int: %d to %d%n", Integer.MIN_VALUE, Integer.MAX_VALUE);
        System.out.printf("Range of long: %d to %d%n", Long.MIN_VALUE, Long.MAX_VALUE);
        System.out.printf("Range of float: %e to %e%n", Float.MIN_VALUE, Float.MAX_VALUE);
        System.out.printf("Range of double: %e to %e%n", Double.MIN_VALUE, Double.MAX_VALUE);
    }
}