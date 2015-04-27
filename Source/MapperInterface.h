/*
  ==============================================================================

    MapperInterface.h
    Created: 10 Apr 2015 12:22:55pm
    Author:  johnty
 TODO: rename to MapperInterfaceThread

  ==============================================================================
*/

#ifndef MAPPERINTERFACE_H_INCLUDED
#define MAPPERINTERFACE_H_INCLUDED

#include "mapper/mapper_cpp.h"
#include "JuceHeader.h"

//int DoIt(float a, char b, char c) __attribute__ ((cdecl));
//void MapperInputHandler(mapper::Signal msig,
//                        int instance_id,
//                        void *value,
//                        int count,
//                        mapper::Timetag tt) __attribute__ ((cdecl));

class MapperInterface : public Thread, public ChangeBroadcaster
{

public:
    
    MapperInterface();
    ~MapperInterface();
    
    void run();
    void updateVals(std::vector<int> newVals);
    
//    int (MapperInterface::*pt2Member) (float, char, char) = NULL;
//    int DoIt(float a, char b, char c) __attribute__ ((cdecl)) { DBG("DoIt"); return a+b+c; }
    
//    void (MapperInterface::*callbackPtr) (mapper::Signal, int, void*, int, mapper::Timetag) = NULL;
//    void MapperInputHandler(mapper::Signal msig,
//                            int instance_id,
//                            void *value,
//                            int count,
//                            mapper::Timetag tt);
//    
//    static void inputHandler(mapper::Signal msig,
//                             mapper::Signal::Props props,
//                                   int instance_id,
//                                   void *value,
//                                   int count,
//                                   mapper::Timetag tt);
    SpinLock threadLock;
    
private:
    mapper::Device* myMapperOut;
    mapper::Signal* myOutputSigs;
    std::vector<int> mySigVals;
};



#endif  // MAPPERINTERFACE_H_INCLUDED
