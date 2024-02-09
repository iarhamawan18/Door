#include <iostream>
using namespace std;
class Door 
{
	private:
	bool isopen;
	bool isLocked;
	public:
	Door(); // Initializes the door as closed and unlocked
	void closeDoor() 
    {
        isopen = false;
        cout << "Door is now closed." << endl;
    }
	 void openDoor() 
    {
        if (!isLocked) 
        {
            isopen = true;
            cout << "Door is now open." << endl;
        } 
        else 
        {
            cout << "Cannot open the door. It is locked." << endl;
        }
    }
	void lockDoor()
    {
        if (!isopen) 
        {
            isLocked = true;
            cout << "Door is now locked." << endl;
        } 
        else 
        {
            cout << "Cannot lock the door. It is still open." << endl;
        }
    }
	void unlock();
	bool isDoorOpen() const;
	bool isDoor Locked() const;
};

int main()
{
	return 0;
}