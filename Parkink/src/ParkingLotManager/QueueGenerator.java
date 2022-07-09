package ParkingLotManager;

import ParkingLotManager.Entities.*;
import ParkingLotManager.Entities.Interfaces.EntityInterface;


import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class QueueGenerator {
     Random random = new Random();
     int ANONYMOUS_PEDESTRIANS_COUNT = random.nextInt(45)+1;
     int PEDESTRIANS_COUNT = random.nextInt(89)+1;
     int CARS_COUNT = random.nextInt(30)+1;
     int TEACHER_CARS_COUNT = random.nextInt(20)+1;
     int BICYCLES_COUNT = random.nextInt(34)+1;
     int AMBULANS = random.nextInt(9)+1;
     int CURIER = random.nextInt(9)+1;
     int Black = 10;
    public ArrayList<EntityInterface>arrayList(){
        ArrayList<EntityInterface> queue = new ArrayList<>();

        for (int i=0;i<=ANONYMOUS_PEDESTRIANS_COUNT;i++){
            queue.add(new Pedestrian());
        }
        for (int i=0;i<PEDESTRIANS_COUNT;i++){
            queue.add(new Pedestrian(getRandomName()));
        }
        for (int i=0;i<CARS_COUNT;i++){
            queue.add(new Car(getRandomPlateNumber()) );
        }
        for (int i=0;i<TEACHER_CARS_COUNT;i++){
            queue.add(new TeacherCar(getRandomPlateNumber()));
        }
        for (int i=0;i<BICYCLES_COUNT;i++){
            queue.add(new Bicycle());
        }
        for (int i=0;i<AMBULANS;i++){
            queue.add(new Ambulans(getRandomPlateNumber()));
        }
        for (int i=0;i<CURIER;i++){
            queue.add(new Curier(getRandomPlateNumber()));
        }
        for(int i=0;i<Black;i++){
            queue.add(new Czarne_Blachy(getRandomPlateNumber()));
        }
        Collections.shuffle(queue);
        return queue;
    }

    private static String getRandomPlateNumber() {
        Random generator = new Random();
        return "DLX " + (generator.nextInt(89999) + 10000);
    }

    private static String getRandomName() {
        String[] names = {"John", "Jack", "James", "George", "Joe", "Jim"};
        return names[(int) (Math.random() * names.length)];
    }


}