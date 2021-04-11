# SwitchAC-BTWS

Program do obsługi przełącznika AC.
Wykorzystuje moduł ESP-12F z ESP8266.
Użyte są trzy piny;
GPIO0 - Button (przycisk załączający i wyłączający przekaźnik)
GPIO15 - steruje przekaźnikiem
GPIO4 - 1-Wire (obsługuje termometr DS18B20)

W katalogu KiCAD są schematy modułów wykorzystanych do budowy tego przełącznika.

W pliku SwitchAC-BTWS.h można zmieniac opcje kompilacji programu.

#define POLISH
przełącza na język polski, jeśli to zakomentujesz to będzie język angielski

#define WEBPAGESWITCH
buduje stonę www z możliwością sterowania przełącznikiem

#de4fine IP_STATIC
ustawia stały adres IP, który należy ustalić w pliku SwitchAC_BTWS.ino (linie 43-45)

#define BUTTON
umieszcza na stronie www przycisk załączania i wyłączania

#define HOSTNAME "nazwa przełacznika"  i tytuł strony www.

#define TERMOMETER
dodaje obsługę termometru

#define WEPBPAGEWIFISCAN
dodaje opcje skanowania sieci wifi
Jeśli jest zakomentowanie, to przy pierwszym uruchomieniu programu startuje program WiFIManager i można ustawić dane połączenia z WiFi.
Przy kolejnych uruchomieniach łączy się z ustalonym WiFi bezpośrednio.

Wpisując w przeglądarce www;

http://ADR_IP/update
można wgrać inną wersję programu
login: admin
password: esp8266

http://ADR_IP/get
podaje stany przełącznika i przycisku oraz temperature
R=1 lub 0  1- przłącznik załączony
B=0 lub 1  1- przycisk wcisnięty
T= 20.22  temperatura na czujniku temperatury

http://ADR_IP/reboot
zdalny reset urządzenia

http://ADR_IP/relay/1  załącza przekaźnik

http://ADR_IP/relay/0  wyłącza przekaźnik

