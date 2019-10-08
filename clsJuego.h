#ifndef CLSJUEGO_H
#define CLSJUEGO_H



class clsJuego
{
    private:
        int montoInicial;
        int apuesta;
        int montoActual;
        int cantPartidasGanadas;
        int cantPartidasPerdidas;

        void setMontoInicial(int mi){montoInicial=mi;}
        void setApuesta(int ap){apuesta=ap;}
        void setMontoActual(int ma){montoActual=ma;}
        void setCantPartidasGanadas(int pg){cantPartidasGanadas=pg;}
        void setCantPartidasPerdidas(int pe){cantPartidasPerdidas=pe;}

    public:
        clsJuego(int montoInicial);
        void Perder();
        void Ganar();
        void Apostar(int apuesta);
        void Guardar();
        void Cargar();
        void Reiniciar();
        void MostrarEstadisticas();
        
        int getMontoInicial(){return montoInicial;}
        int getApuesta(){return apuesta;}
        int getMontoActual(){return montoActual;}
        int getCantPartidasGanadas(){return cantPartidasGanadas;}
        int getCantPartidasPerdidas(){return cantPartidasPerdidas;}


    //protected:
};

#endif // CLSJUEGO_H
