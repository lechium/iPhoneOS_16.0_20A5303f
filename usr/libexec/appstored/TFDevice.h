//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TFDisplay, TFMemoryUsage;

@interface TFDevice : PBCodable
{
    NSString *_architecture;	// 8 = 0x8
    unsigned int _batteryPercentage;	// 16 = 0x10
    NSString *_carrier;	// 24 = 0x18
    NSString *_cellularNetworkType;	// 32 = 0x20
    int _connection;	// 40 = 0x28
    int _deviceFamily;	// 44 = 0x2c
    int _devicePlatform;	// 48 = 0x30
    TFMemoryUsage *_disk;	// 56 = 0x38
    TFDisplay *;	// 64 = 0x40
    NSString *_locale;	// 72 = 0x48
    NSString *_model;	// 80 = 0x50
    NSString *_osVersion;	// 88 = 0x58
    NSString *_timezone;	// 96 = 0x60
    struct {
        unsigned int batteryPercentage:1;
        unsigned int connection:1;
        unsigned int deviceFamily:1;
        unsigned int devicePlatform:1;
    } _has;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000002235d8
@property(nonatomic) unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
@property(retain, nonatomic) TFMemoryUsage *disk; // @synthesize disk=_disk;
@property(retain, nonatomic) NSString *cellularNetworkType; // @synthesize cellularNetworkType=_cellularNetworkType;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) TFDisplay *display; // @synthesize display=_display;
@property(retain, nonatomic) NSString *architecture; // @synthesize architecture=_architecture;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000223289
- (unsigned long long)hash;	// IMP=0x00100000002230f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000222e17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000222be2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000222a24
- (void)writeTo:(id)arg1;	// IMP=0x0010000000222871
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000222864
- (id)dictionaryRepresentation;	// IMP=0x0010000000221f6b
- (id)description;	// IMP=0x0010000000221ebc
@property(nonatomic) _Bool hasBatteryPercentage;
@property(readonly, nonatomic) _Bool hasDisk;
- (int)StringAsConnection:(id)arg1;	// IMP=0x0010000000221db3
- (id)connectionAsString:(int)arg1;	// IMP=0x0010000000221d6a
@property(nonatomic) _Bool hasConnection;
@property(nonatomic) int connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool hasCellularNetworkType;
@property(readonly, nonatomic) _Bool hasCarrier;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(readonly, nonatomic) _Bool hasLocale;
@property(readonly, nonatomic) _Bool hasDisplay;
@property(readonly, nonatomic) _Bool hasArchitecture;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasModel;
- (int)StringAsDeviceFamily:(id)arg1;	// IMP=0x0010000000221b40
- (id)deviceFamilyAsString:(int)arg1;	// IMP=0x0010000000221af7
@property(nonatomic) _Bool hasDeviceFamily;
@property(nonatomic) int deviceFamily; // @synthesize deviceFamily=_deviceFamily;
- (int)StringAsDevicePlatform:(id)arg1;	// IMP=0x00100000002219de
- (id)devicePlatformAsString:(int)arg1;	// IMP=0x0010000000221995
@property(nonatomic) _Bool hasDevicePlatform;
@property(nonatomic) int devicePlatform; // @synthesize devicePlatform=_devicePlatform;

@end
