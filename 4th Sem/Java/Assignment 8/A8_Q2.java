import java.util.*;

class Course {
    int credit;
    String medium;
    int numStudents;

    public Course(int credit, String medium) {
        this.credit = credit;
        this.medium = medium;
        this.numStudents = 0;
    }

    public void registerStudent() {
        numStudents++;
    }

    public int number() {
        return numStudents;
    }

    public void display() {
        if (numStudents >= 2) {
            System.out.println("This course is floated.");
        } else {
            System.out.println("This course is not floated.");
        }
    }
}

class CourseA extends Course {
    public CourseA(int credit, String medium) {
        super(credit, medium);
    }

    public void printCourseDetails() {
        System.out.println("Course A details:");
        System.out.println("Credit: " + credit);
        System.out.println("Medium: " + medium);
        System.out.println("Number of students registered: " + number());
        display();
    }
}

class CourseB extends Course {
    public CourseB(int credit, String medium) {
        super(credit, medium);
    }

    public void printCourseDetails() {
        System.out.println("Course B details:");
        System.out.println("Credit: " + credit);
        System.out.println("Medium: " + medium);
        System.out.println("Number of students registered: " + number());
        display();
    }
}

public class A8_Q2 {
    public static void main(String[] args) {
        CourseA courseA = new CourseA(3, "English");
        CourseB courseB = new CourseB(2, "Maths");

        courseA.registerStudent();
        courseA.registerStudent();
        courseA.printCourseDetails();

        courseB.registerStudent();
        courseB.printCourseDetails();
    }
}