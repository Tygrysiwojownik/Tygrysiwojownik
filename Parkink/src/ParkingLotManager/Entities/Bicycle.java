package ParkingLotManager.Entities;

import ParkingLotManager.Entities.Interfaces.EntityInterface;

public class Bicycle implements EntityInterface {

    public String identify() {
        return "Unknown bicycle";
    }

    @Override
    public boolean canEnter() {
        return true;
    }


}
