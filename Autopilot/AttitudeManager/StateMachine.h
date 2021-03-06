/* 
 * File:   StateMachine.h
 * Author: Chris Hajduk
 *
 * Created on June 9, 2015, 8:58 PM
 */

#ifndef STATEMACHINE_H
#define	STATEMACHINE_H

#ifdef	__cplusplus
extern "C" {
#endif

#define STATEMACHINE_MAINLOOP 0
#define STATEMACHINE_IMU 1

#define DMA_UPDATE_FREQUENCY 10

#include "main.h"
#include "AttitudeManager.h"
#include "InterchipDMA.h"
#include "net.h"
#include "VN100.h"
#include "cameraManager.h"

    void StateMachine(char entryLocation);
    void highLevelControl();
    void lowLevelControl();
    void forceStateMachineUpdate();
    void killPlane(char action);

#ifdef	__cplusplus
}
#endif

#endif	/* STATEMACHINE_H */

