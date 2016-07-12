//
//  partron_sensor_dongle.h
//  partron_sensor_dongle
//
//  Created by 조선근 on 2015. 8. 17..
//  Copyright (c) 2015년 조선근. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface partron_sensor_dongle : NSObject

extern double FT_Algorithm(double targetdegree);
extern double get_sTmeas(double vBridge);
extern double get_sTs(double emsval, double sTmeas, double ambient);
extern double get_finalTargetTemp(double sTs);
extern double ApplyTPCoefficientsToRawData(int coefficients[14], double rawTo, double rawTa);
extern double GetCorrectedTemp_TP(int coefficients_TP[14], double tempRaw);
extern void Coeff_calc(int buffer[42], int outputdata[14]);
extern void Coeff_calc_twomode_gen(int buffer[34], int* outputdata1);
extern void Coeff_calc_twomode_hum(int buffer[34], int* outputdata2);
extern float MAVR_AmbDegree(float ambdegree,int AMB_MOV_AVR);
extern float MAVRGetSlopeByDegree(float p2_ambientdegree);
extern float MAVR_slope(float slopeval);
extern float MAVR_Degree(float objdegree, int OBJ_MOV_AVR);
extern bool slope_abs(float amb_temp, float avrambslope);
    
@end
