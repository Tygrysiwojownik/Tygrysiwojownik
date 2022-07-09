package ParkingLotManager;

import ParkingLotManager.Entities.Interfaces.EntityInterface;


import java.util.ArrayList;
import java.util.Random;


public class Main {

 

    public static void main(String[] args) {

        Random random = new Random();
        ParkingLot parking = new ParkingLot();
        int k = random.nextInt(82) + 1;
        int l = 0;
        Log.info("There's " + parking.countCars() + " cars in the parking lot");
        Log.info();
        QueueGenerator queue1 = new QueueGenerator();
        ArrayList<EntityInterface> Q = queue1.arrayList();

            for (int n = 0; n < 3; n++) {
                for (int j = 6; j<12; j++) {
                    for (int i = 0; i < k; i++) {
                        if (l<22) {
                            for (EntityInterface entityInterface : Q) {
                                if (parking.checkIfCanEnter(entityInterface)) {
                                    parking.letIn(entityInterface);
                                    System.out.println(l = j + 6 * n);
                                }
                            }
                        }
                    }

                }
                Log.info();
                Log.info("There's " + parking.countCars() + " cars in the parking lot");
            }
            int g = parking.counpaytCars()*4+parking.coutbicycle()*4;
            System.out.println(g);
        }

    }

