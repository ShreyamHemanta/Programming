public class A11_Q4 {
    public static void main(String[] args) {
        try {
            Time t1 = new Time(25, 65, 70); // Throws HrsException, MinException, and SecException
            System.out.println("Time is: " + t1.getHours() + ":" + t1.getMinutes() + ":" + t1.getSeconds());
        } catch (HrsException | MinException | SecException e) {
            System.out.println(e.getMessage());
        }
    }
}

class Time {
    private int hours;
    private int minutes;
    private int seconds;

    public Time(int hours, int minutes, int seconds) throws HrsException, MinException, SecException {
        if (hours < 0 || hours > 24) {
            throw new HrsException("Invalid value for hours: " + hours);
        }
        if (minutes < 0 || minutes > 60) {
            throw new MinException("Invalid value for minutes: " + minutes);
        }
        if (seconds < 0 || seconds > 60) {
            throw new SecException("Invalid value for seconds: " + seconds);
        }

        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    public int getHours() {
        return hours;
    }

    public int getMinutes() {
        return minutes;
    }

    public int getSeconds() {
        return seconds;
    }
}

class HrsException extends Exception {
    public HrsException(String message) {
        super(message);
    }
}

class MinException extends Exception {
    public MinException(String message) {
        super(message);
    }
}

class SecException extends Exception {
    public SecException(String message) {
        super(message);
    }
}
