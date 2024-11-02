#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    
    while (true)
    {
        int x = frame;
        int y = frame < 70 ? 0 : -(frame - 70)/2;

        auto can = Canvas(300,70);

        //Pista_vuelo
        can.DrawPointLine(0,58,300,58);
        //Base
        can.DrawPointLine(30+x,54+y,35+x,54+y);
        //Motor
        can.DrawPointLine(35+x,52+y,35+x,56+y);
        can.DrawPointLine(35+x,52+y,40+x,51+y);
        can.DrawPointLine(35+x,56+y,40+x,57+y);
        can.DrawPointLine(40+x,51+y,40+x,57+y);
        //Base_2
        can.DrawPointLine(40+x,54+y,51+x,54+y);
        can.DrawPointLine(52+x,53+y,52+x,53+y);
        can.DrawPointLine(52+x,52+y,42+x,47+y);
        can.DrawPointLine(41+x,46+y,5+x,47+y);
        //Cola
        can.DrawPointLine(5+x,47+y,1+x,42+y);
        can.DrawPointLine(1+x,42+y,4+x,42+y);
        can.DrawPointLine(4+x,42+y,15+x,47+y);
        //Base_3
        can.DrawPointLine(5+x,47+y,3+x,47+y);
        can.DrawPointLine(3+x,47+y,2+x,48+y);
        can.DrawPointLine(0+x,48+y,6+x,48+y);
        can.DrawPointLine(0+x,48+y,3+x,50+y);
        can.DrawPointLine(4+x,50+y,6+x,50+y);
        can.DrawPointLine(3+x,50+y,15+x,53+y);
        can.DrawPointLine(15+x,53+y,30+x,54+y);
        //Ala
        can.DrawPointLine(33+x,53+y,33+x,52+y);
        can.DrawPointLine(33+x,52+y,18+x,48+y);
        can.DrawPointLine(17+x,48+y,25+x,53+y);
        can.DrawPointLine(25+x,53+y,32+x,53+y);
        //Ruedas_ventanas
        if (frame < 75) {
        can.DrawPointCircle(43+x,56+y,1);
        can.DrawPointCircle(24+x,56+y,1);
        }
        can.DrawPointLine(42+x,50+y,48+x,50+y);
        can.DrawPointLine(42+x,50+y,42+x,47+y);
        can.DrawPointLine(42+x,48+y,44+x,48+y);
        //Ventanas_pasajeros
        can.DrawPointLine(37+x,49+y,37+x,48+y);
        can.DrawPointLine(38+x,49+y,38+x,48+y);
        can.DrawPointLine(34+x,49+y,34+x,48+y);
        can.DrawPointLine(35+x,49+y,35+x,48+y);
        can.DrawPointLine(31+x,49+y,31+x,48+y);
        can.DrawPointLine(32+x,49+y,32+x,48+y);
        can.DrawPointLine(28+x,49+y,28+x,48+y);
        can.DrawPointLine(29+x,49+y,29+x,48+y);

        can.DrawPointLine(14+x,49+y,14+x,48+y);
        can.DrawPointLine(15+x,49+y,15+x,48+y);
        can.DrawPointLine(11+x,49+y,11+x,48+y);
        can.DrawPointLine(12+x,49+y,12+x,48+y);
        
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Black,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.04s);
        frame++;
    }

    return 0;
}