#ifndef CONFIG_H
#define CONFIG_H

class Config
{
private:
    int filasTablero;
    int columnasTablero;
    int minasTablero;
    bool modoDesarrolladorTablero;
    int vidasTablero;

public:
    // Constructor
    Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

    // Métodos
    void menuConfiguracion();

    // Getters
    int getfilasTablero();
    int getcolumnasTablero();
    int getminasTablero();
    bool getmodoDesarrolladorTablero();
    int getvidasTablero();

    // Setters (IMPORTANTE: ahora son void)
    void setfilasTablero(int filasTablero);
    void setcolumnasTablero(int columnasTablero);
    void setminasTablero(int minasTablero);
    void setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);
    void setvidasTablero(int vidasTablero);
};

#endif
