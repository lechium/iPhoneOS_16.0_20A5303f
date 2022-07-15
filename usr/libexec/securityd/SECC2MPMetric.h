//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, SECC2MPCloudKitInfo, SECC2MPDeviceInfo, SECC2MPGenericEvent, SECC2MPNetworkEvent, SECC2MPServerInfo;

@interface SECC2MPMetric : PBCodable
{
    unsigned long long _reportFrequency;	// 8 = 0x8
    unsigned long long _reportFrequencyBase;	// 16 = 0x10
    unsigned long long _triggers;	// 24 = 0x18
    SECC2MPCloudKitInfo *_cloudkitInfo;	// 32 = 0x20
    SECC2MPDeviceInfo *_deviceInfo;	// 40 = 0x28
    SECC2MPGenericEvent *_genericEvent;	// 48 = 0x30
    int _metricType;	// 56 = 0x38
    SECC2MPNetworkEvent *_networkEvent;	// 64 = 0x40
    SECC2MPServerInfo *_serverInfo;	// 72 = 0x48
    struct {
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int triggers:1;
        unsigned int metricType:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000aa266
@property(retain, nonatomic) SECC2MPGenericEvent *genericEvent; // @synthesize genericEvent=_genericEvent;
@property(retain, nonatomic) SECC2MPNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) SECC2MPServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(retain, nonatomic) SECC2MPCloudKitInfo *cloudkitInfo; // @synthesize cloudkitInfo=_cloudkitInfo;
@property(retain, nonatomic) SECC2MPDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a9fb7
- (unsigned long long)hash;	// IMP=0x00100000000a9e7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a9c69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a9acf
- (MISSING_TYPE *)copyTo: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a998e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a984c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a92ad
- (id)dictionaryRepresentation;	// IMP=0x00100000000a8f52
- (id)description;	// IMP=0x00100000000a8ea3
@property(readonly, nonatomic) _Bool hasGenericEvent;
@property(readonly, nonatomic) _Bool hasNetworkEvent;
@property(nonatomic) _Bool hasReportFrequencyBase;
@property(nonatomic) _Bool hasReportFrequency;
@property(nonatomic) _Bool hasTriggers;
@property(readonly, nonatomic) _Bool hasServerInfo;
@property(readonly, nonatomic) _Bool hasCloudkitInfo;
@property(readonly, nonatomic) _Bool hasDeviceInfo;
- (int)StringAsMetricType:(id)arg1;	// IMP=0x00100000000a8cc5
- (id)metricTypeAsString:(int)arg1;	// IMP=0x00100000000a8c59
@property(nonatomic) _Bool hasMetricType;
@property(nonatomic) int metricType; // @synthesize metricType=_metricType;

@end
