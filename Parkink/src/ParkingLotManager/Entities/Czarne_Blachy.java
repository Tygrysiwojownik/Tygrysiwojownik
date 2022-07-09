package ParkingLotManager.Entities;
import ParkingLotManager.Entities.Interface2.Nothing;
public class Czarne_Blachy extends Car implements  Nothing {
    public Czarne_Blachy(String plate) {
        super(plate);
    }
    public boolean canEnter() {
        return false;
    }
}
