package ParkingLotManager.Entities.Interfaces;

public class Tank implements EntityInterface{
    String t="Can't go in insite";
    Szerokosc szerokosc = new Szerokosc(3);

    @Override
    public String identify() {
        return t;
    }
    @Override
    public boolean canEnter() {
        return false;
    }
}
