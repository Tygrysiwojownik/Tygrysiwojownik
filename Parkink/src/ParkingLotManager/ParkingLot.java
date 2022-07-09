package ParkingLotManager;

import ParkingLotManager.Entities.Bicycle;
import ParkingLotManager.Entities.Car;
import ParkingLotManager.Entities.Interfaces.EntityInterface;
import ParkingLotManager.Entities.Pedestrian;
import ParkingLotManager.Entities.TeacherCar;


import java.util.ArrayList;

final public class ParkingLot {

    private ArrayList<EntityInterface> entitiesOnProperty = new ArrayList<>();
    private int carsOnProperty = 0;
    private int k=0;
    private int s=0;
    private int f=0;
    private int szerokosc;
    public boolean checkIfCanEnter(EntityInterface entity) {
        return entity.canEnter();
    }

    public void letIn(EntityInterface entity) {
        entitiesOnProperty.add(entity);
        if (carsOnProperty < 1000) {
            Log.info(entity.identify() + " let in.");
            if (entity instanceof Car) {
                carsOnProperty++;
            }
            if (entity instanceof TeacherCar){
                k++;
            }
        }
        else
            if (entity instanceof Car) {
                Log.info(entity.identify() + " Don't let in");
            }
        if (carsOnProperty>=1000) {
            if (entity instanceof Pedestrian) {
                Log.info(entity.identify() + " let in");
            }
            if(s<=200) {
                if (entity instanceof Bicycle) {
                    Log.info(entity.identify() + " let in");
                    s++;
                }
            }else
                if (entity instanceof Bicycle){
                    f++;
                }
        }
    }
    public int countCars() {
        return carsOnProperty;
    }
    public int counpaytCars(){
        int l=carsOnProperty-k;
        return l;
    }
    public int coutbicycle(){
        return f;
    }
}