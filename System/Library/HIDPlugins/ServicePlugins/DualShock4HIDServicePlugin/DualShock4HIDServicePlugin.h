//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GCLightServiceClientInterface, GCMotionServiceClientInterface;

@interface DualShock4HIDServicePlugin
{
    long long _modelVariant;	// 8 = 0x8
    _Bool _powerSupplyConnected;	// 16 = 0x10
    unsigned char _batteryLevel;	// 17 = 0x11
    _Bool _haveReportedBatteryOnce;	// 18 = 0x12
    _Bool _batteryStabilized;	// 19 = 0x13
    NSString *_supportMode;	// 24 = 0x18
    NSString *_serialNumber;	// 32 = 0x20
    _Bool _sensorsActive;	// 40 = 0x28
    unsigned char _ledR;	// 41 = 0x29
    unsigned char _ledG;	// 42 = 0x2a
    unsigned char _ledB;	// 43 = 0x2b
    unsigned char _flashOnDuration;	// 44 = 0x2c
    unsigned char _flashOffDuration;	// 45 = 0x2d
    double _gyroSensitivityPitch;	// 48 = 0x30
    double _gyroSensitivityYaw;	// 56 = 0x38
    double _gyroSensitivityRoll;	// 64 = 0x40
    double _accelBiasX;	// 72 = 0x48
    double _accelBiasY;	// 80 = 0x50
    double _accelBiasZ;	// 88 = 0x58
    double _accelSensitivityX;	// 96 = 0x60
    double _accelSensitivityY;	// 104 = 0x68
    double _accelSensitivityZ;	// 112 = 0x70
    long long _batteryDeviceToken;	// 120 = 0x78
    struct {
        unsigned char reportID;
        short gyroPitchBias;
        short gyroYawBias;
        short gyroRollBias;
        short gyroRefPitchPlus;
        short gyroRefPitchMinus;
        short gyroRefYawPlus;
        short gyroRefYawMinus;
        short gyroRefRollPlus;
        short gyroRefRollMinus;
        short gyroRefSpeedPlus;
        short gyroRefSpeedMinus;
        short accelRefXPlus;
        short accelRefXMinus;
        short accelRefYPlus;
        short accelRefYMinus;
        short accelRefZPlus;
        short accelRefZMinus;
        unsigned short calibrationTemp;
        unsigned int crc32;
    } _sensorCalibrationInfo;	// 128 = 0x80
    struct {
        unsigned char reportID;
        char buildDate[16];
        char buildTime[16];
        unsigned short deviceRevision;
        unsigned short hardwareVersion;
        unsigned int softwareVersion;
        unsigned short softwareSubVersion;
        unsigned short softwareSeriesInfo;
        unsigned int codeSize;
        unsigned int crc32;
    } _firmwareInfo;	// 169 = 0xa9
    struct {
        unsigned char reportID;
        unsigned char localBDAddress[6];
        unsigned char categoryOfDevice[3];
        unsigned char hostBDAddress[6];
    } _pairingInfo;	// 222 = 0xde
    id <GCLightServiceClientInterface> _lightClient;	// 240 = 0xf0
    id <GCMotionServiceClientInterface> _motionClient;	// 248 = 0xf8
    _Bool _extendedSupportEnabled;	// 256 = 0x100
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x001000000000285e
- (void).cxx_destruct;	// IMP=0x000000000000639c
@property(nonatomic) _Bool extendedSupportEnabled; // @synthesize extendedSupportEnabled=_extendedSupportEnabled;
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000062a7
- (void)updateSensorsActive:(_Bool)arg1;	// IMP=0x0000000000006157
- (void)readSensorsActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000613e
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006059
- (void)updateLightWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x0000000000005e40
- (void)readLightWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005d5c
- (id)defaultHapticMotors;	// IMP=0x0000000000005c7b
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000005c6d
- (void)dispatchHapticEvent;	// IMP=0x0000000000005c2c
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x0000000000005c1a
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000005b03
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x000000000000579e
@property(readonly, copy) NSString *description;
- (void)updateBatteryLevel:(unsigned char)arg1 isPowerSupplyConnected:(_Bool)arg2;	// IMP=0x00000000000055d5
- (void)dispatchOutputReport;	// IMP=0x000000000000527f
- (void)setupRawReportHandling;	// IMP=0x00000000000045f2
- (void)requestPairingInfo;	// IMP=0x00000000000042db
- (void)requestSensorCalibrationInfo;	// IMP=0x000000000000340e
- (void)requestFirmwareInfo;	// IMP=0x0000000000002e95
- (void)determineSupportMode;	// IMP=0x0000000000002b8f
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000002918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
