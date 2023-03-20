public class A9_Q2 {
    public static void main(String[] args) {
       String[] names = {"ANSHUMAN", "RISHI", "SHREYA", "ABC", "DEF", "GHI", "JKL", "MNO", "PQR", "NIKHIL"};
       int[][] records = {{75, 5, 7}, {69, 5, 4}, {65, 5, 2}, {68, 5, 9}, {72, 5, 11}, {73, 5, 6}, {70, 5, 8}, {74, 5, 3}, {67, 5, 5}, {70, 5, 6}};
       int minIndexHeight = 0;
       int maxIndexHeight = 0;
       int minIndexWeight = 0;
       int maxIndexWeight = 0;
       for (int i = 1; i < records.length; i++) {
          if (records[i][1] < records[minIndexHeight][1]) {
             minIndexHeight = i;
          }
          else if (records[i][1] == records[minIndexHeight][1]){
             if( records[i][2] < records[minIndexHeight][2]){
                 minIndexHeight = i;
             }
          }
          if (records[i][1] > records[maxIndexHeight][1]) {
             maxIndexHeight = i;
          }
          else if (records[i][1] == records[maxIndexHeight][1]){
             if( records[i][2] > records[maxIndexHeight][2]){
                 maxIndexHeight = i;
             }
          }
          if (records[i][0] <= records[minIndexWeight][0]) {
             minIndexWeight = i;
          }
          if (records[i][0] >= records[maxIndexWeight][0]) {
             maxIndexWeight = i;
          }
       }
       System.out.println("Student with highest height: " + names[maxIndexHeight] + "  |||  " + String.valueOf(records[maxIndexHeight][1])+"."+String.valueOf(records[maxIndexHeight][2]) );
       System.out.println("Student with lowest height: " + names[minIndexHeight] + "  |||  " + String.valueOf(records[minIndexHeight][1])+"."+String.valueOf(records[minIndexHeight][2]));
       System.out.println("Student with highest weight: " + names[maxIndexWeight] + "  |||  " + records[maxIndexWeight][0]);
       System.out.println("Student with lowest weight: " + names[minIndexWeight] + "  |||  " +  records[minIndexWeight][0]);
    }
 }
 