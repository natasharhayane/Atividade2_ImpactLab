#include <fstream>

using namespace std;

int main() { // Thread

	// Read Image
	ifstream Image_Read;
	Image_Read.open("images/p3images/apollo.ppm");

	// Write Image
	ofstream Image_write;
	Image_write.open("images/out/New_Apollo.ppm");

	// Copy Memory
	//Image_Read >> memory>> Image_Write

	//Image Header
	// Type = P3 ou P6
	string type = "", width = "", height = "", RGBMax = "";


	// Copy Memory
	//Image_Read >> memory
	Image_Read >> type;
	Image_Read >> width;
	Image_Read >> height;
	Image_Read >> RGBMax;


	// Copy Memory to new Image
	//memory>> Image_Write
	Image_write << type << endl;
	Image_write << width << " " << height << endl;
	Image_write << RGBMax << endl;


	// Image Body
	string red = "", green = "", blue = "";



	while (!Image_Read.eof()) { // ImageRead numero Pixel = 611 * 480 = 293.280 Pixels - 20Mbytes

		// Read Image and Write to Memory
		Image_Read >> red;
		Image_Read >> green;
		Image_Read >> blue;

		// Write to new Images
		Image_write << red << " " << green << " " << blue << " " << endl;
	}


	//  Close Images
	Image_Read.close();
	Image_write.close();





	return 0;

}
