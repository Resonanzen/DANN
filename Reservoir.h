#ifndef RESERVOIR_H
#define RESERVOIR_H

#include "Neuron.h"
#include "utils.h"
#include "global.h"

class Reservoir
{
    public:
        /** Default constructor */
        Reservoir();

        /** Default constructor */
        Reservoir(int resDimension);

        /**
         *
         *
         */
        void linkSensor(Neuron* sensor, Neuron* target);

        /**
         *
         *
         */
        void linkMotor(Neuron* target, Neuron* motor);

        /** Default destructor */
        virtual ~Reservoir();
    protected:
    private:

        int resSize;
        int maxInputs;
        int maxAxonLength;
        int maxSynapses;

        Neuron* neurons[MAX_RES_SIZE][MAX_RES_SIZE][MAX_RES_SIZE];

        float neuronSynapseDensity;
};

#endif // RESERVOIR_H
