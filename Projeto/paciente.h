#ifndef PACIENTE_H
#define PACIENTE_H
#include <QString>

namespace PC
{
    class Paciente
    {
    private:
        QString nomeCompleto;
        int peso;
        float altura;
        QString sexo;
    public:
            Paciente();
            Paciente(QString nomeCompleto, int peso, float altura, QString sexo);
            void setPeso(int newpeso);
            int getPeso()const;
            void setNome(QString newNome);
            QString getNome()const;
            void setAltura(float newAltura);
            float getAltura()const;
            void setSexo(QString newSexo);
            QString getSexo()const;
            float calcularIMC()const;
            QString calcularFaixaRisco()const;
            QString calcularPesoIdeal()const;
    };
}

#endif // PACIENTE_H
