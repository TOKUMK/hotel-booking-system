#include <iostream>
using namespace std;

class Hotel {

private:
	Char [] hotelName;
	double 	hotelTelephoneNum;
	int 	hotelCapacity;
	int		hotelStarRating;


	// TODO
	// Object Staff Hotel Manager

	// Object Staff Receptionist

	// Collection of hotel rooms

public:

	void setHotelManager();
	void getHotelManager();

	void setHotelReceptionist();
	void getHotelReceptionist();

	void setHotelName();
	void getHotelName();

	void setTelephoneNumber();
	void getTelephoneNumber();

	void setHotelCapacity();
	void getHotelCapacity();

	void setHotelStarRating();
	void getHotelStarRating();

	void getBooking();
	void setBooking();
	void deleteBooking();


}
