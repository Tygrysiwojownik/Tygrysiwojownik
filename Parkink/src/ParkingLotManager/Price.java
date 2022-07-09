package ParkingLotManager;

import ParkingLotManager.Entities.Interfaces.EntityInterface;

public class Price implements EntityInterface {
    private String plate;

    public Price(String plate){
        this.plate=plate;
    }
    @Override
    public String identify() {
        return plate;
    }

    @Override
    public boolean canEnter() {
        return false;
    }
}
