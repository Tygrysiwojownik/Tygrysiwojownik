package ParkingLotManager;

import ParkingLotManager.Entities.Car;
import ParkingLotManager.Entities.Interface2.Nothing;
public class Curier extends Car implements Nothing {
    public Curier(String plate) {
        super(plate);
    }
}
