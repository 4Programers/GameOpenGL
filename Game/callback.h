#ifndef _CALLBACK_H_			
	// ovo se pise uvek kada na pocetku svakog .h fajla , ovo _INIT_H je proizvoljno napisano, moze bilo sta
#define _CALLBACK_H_			
	// znaci ova dva reda koda ustvari kazu da ako nije ukljucen ovaj h fajl u neki drugi fajl ,samo tad se 
	// include radi, inace se ne ubacuje unutar, da ne bi doslo do ponavljanja podataka


extern int window_width;
extern int window_height;

void onDisplay();
void onKeyboard(unsigned char c , int x, int y);
void onReshape(int w_width, int w_height);
void onMouseClick(int button, int state, int x, int y);
void onMouseMove(int x,int y);
float random_float(const float min, const float max);






#endif			// ovo obavezno na kraju fajla se pise, time se zatvara ono #ifndef sa pocetka
