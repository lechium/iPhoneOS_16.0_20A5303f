//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GCAdaptiveTriggersServiceClientInterface, GCLightServiceClientInterface, GCMotionServiceClientInterface;

@interface DualSenseHIDServicePlugin
{
    long long _batteryDeviceToken;	// 8 = 0x8
    _Bool _powerSupplyConnected;	// 16 = 0x10
    unsigned char _batteryLevel;	// 17 = 0x11
    unsigned char _chargeStatus;	// 18 = 0x12
    _Bool _haveReportedBatteryOnce;	// 19 = 0x13
    _Bool _batteryStabilized;	// 20 = 0x14
    NSString *_supportMode;	// 24 = 0x18
    unsigned char _outputSequenceNumber;	// 32 = 0x20
    _Bool _sensorsActive;	// 33 = 0x21
    unsigned char _ledR;	// 34 = 0x22
    unsigned char _ledG;	// 35 = 0x23
    unsigned char _ledB;	// 36 = 0x24
    unsigned char _flashOnDuration;	// 37 = 0x25
    unsigned char _flashOffDuration;	// 38 = 0x26
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
    } _sensorCalibrationInfo;	// 39 = 0x27
    double _gyroSensitivityPitch;	// 80 = 0x50
    double _gyroSensitivityYaw;	// 88 = 0x58
    double _gyroSensitivityRoll;	// 96 = 0x60
    double _accelBiasX;	// 104 = 0x68
    double _accelBiasY;	// 112 = 0x70
    double _accelBiasZ;	// 120 = 0x78
    double _accelSensitivityX;	// 128 = 0x80
    double _accelSensitivityY;	// 136 = 0x88
    double _accelSensitivityZ;	// 144 = 0x90
    CDStruct_066b757d _leftTriggerData;	// 152 = 0x98
    CDStruct_066b757d _rightTriggerData;	// 184 = 0xb8
    struct {
        unsigned char reportID;
        char buildDate[11];
        char buildTime[8];
        unsigned short firmwareType;
        unsigned short softwareSeries;
        unsigned int hardwareInfo;
        unsigned int mainFirmwareVersion;
        unsigned int deviceInfo[3];
        unsigned short updateVersion;
        unsigned char updateCapabilityInfo;
        unsigned char reserved[5];
        unsigned int audioSigProcFWVersion;
        unsigned int audioCodecFWVersion;
        unsigned int crc32;
    } _firmwareInfo;	// 216 = 0xd8
    id <GCLightServiceClientInterface> _lightClient;	// 280 = 0x118
    id <GCAdaptiveTriggersServiceClientInterface> _adaptiveTriggersClient;	// 288 = 0x120
    id <GCMotionServiceClientInterface> _motionClient;	// 296 = 0x128
    CDStruct_0f7f9b7b _playerLights;	// 304 = 0x130
    _Bool _extendedSupportEnabled;	// 309 = 0x135
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x0010000000007551
- (void).cxx_destruct;	// IMP=0x000000000000cbdf
@property(nonatomic) _Bool extendedSupportEnabled; // @synthesize extendedSupportEnabled=_extendedSupportEnabled;
- (void)readAdaptiveTriggerStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cb86
- (void)setAdaptiveTriggerModeOffForIndex:(int)arg1;	// IMP=0x000000000000ca23
- (void)setAdaptiveTriggerModeSlopeFeedbackWithStartPosition:(float)arg1 endPosition:(float)arg2 startStrength:(float)arg3 endStrength:(float)arg4 forIndex:(int)arg5;	// IMP=0x000000000000c81d
- (void)setAdaptiveTriggerModeVibrationWithAmplitudes:(id)arg1 frequency:(float)arg2 forIndex:(int)arg3;	// IMP=0x000000000000c803
- (void)setAdaptiveTriggerModeFeedbackWithResistiveStrengths:(id)arg1 forIndex:(int)arg2;	// IMP=0x000000000000c7e6
- (void)setAdaptiveTriggerWithResistiveStrengths:(id)arg1 mode:(long long)arg2 frequency:(float)arg3 forIndex:(int)arg4;	// IMP=0x000000000000c569
- (void)setAdaptiveTriggerModeVibrationWithStartPosition:(float)arg1 amplitude:(float)arg2 frequency:(float)arg3 forIndex:(int)arg4;	// IMP=0x000000000000c54d
- (void)setAdaptiveTriggerModeFeedbackWithStartPosition:(float)arg1 resistiveStrength:(float)arg2 forIndex:(int)arg3;	// IMP=0x000000000000c52e
- (void)setAdaptiveTriggerWithStartPosition:(float)arg1 resistiveStrength:(float)arg2 mode:(long long)arg3 frequency:(float)arg4 forIndex:(int)arg5;	// IMP=0x000000000000c32b
- (void)setAdaptiveTriggerModeWeaponWithStartPosition:(float)arg1 endPosition:(float)arg2 resistiveStrength:(float)arg3 forIndex:(int)arg4;	// IMP=0x000000000000c133
- (void)connectToAdaptiveTriggersServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c04e
- (void)updateSensorsActive:(_Bool)arg1;	// IMP=0x000000000000befe
- (void)readSensorsActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bee5
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000be00
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bd1b
- (void)updateLightWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x000000000000bb20
- (void)readLightWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ba3c
- (_Bool)io_playerLights:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x000000000000b706
- (void)setAdaptiveTriggerWithMode:(long long)arg1 enabledPositions:(unsigned short)arg2 resistiveStrengths:(CDStruct_7d73c414)arg3 frequency:(int)arg4 forIndex:(int)arg5;	// IMP=0x000000000000b322
- (void)setPlayerLights:(CDStruct_0f7f9b7b)arg1;	// IMP=0x000000000000b17d
- (id)defaultHapticMotors;	// IMP=0x000000000000b09c
- (float)defaultHapticDispatchFrequency;	// IMP=0x000000000000b08e
- (void)dispatchHapticEvent;	// IMP=0x000000000000b04d
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x000000000000b03b
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x000000000000aeac
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x000000000000abb5
@property(readonly, copy) NSString *description;
- (void)updateBatteryLevel:(unsigned char)arg1 chargeStatus:(unsigned char)arg2;	// IMP=0x000000000000a7d4
- (void)dispatchOutputReport;	// IMP=0x000000000000a40b
- (void)updatePayloadWithAdaptiveTriggers:(CDStruct_2588e385 *)arg1;	// IMP=0x000000000000a390
- (void)updatePayload:(union AdaptiveTriggerCommandData *)arg1 withAdaptiveTriggerData:(CDStruct_066b757d *)arg2;	// IMP=0x000000000000a021
- (void)setupRawReportHandling;	// IMP=0x0000000000008fa1
- (void)requestSensorCalibrationInfo;	// IMP=0x00000000000080d1
- (void)requestFirmwareInfo;	// IMP=0x0000000000007a47
- (void)determineSupportMode;	// IMP=0x0000000000007741
- (id)initWithService:(unsigned int)arg1;	// IMP=0x00000000000075f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
