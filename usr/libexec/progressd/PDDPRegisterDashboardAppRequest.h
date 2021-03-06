//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPRegisterDashboardAppRequest : PBRequest
{
    NSMutableArray *_dashboardApps;	// 8 = 0x8
}

+ (Class)dashboardAppsType;	// IMP=0x0020000000056af9
- (void).cxx_destruct;	// IMP=0x00200000000575a0
@property(retain, nonatomic) NSMutableArray *dashboardApps; // @synthesize dashboardApps=_dashboardApps;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000057446
- (unsigned long long)hash;	// IMP=0x0010000000057429
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005738f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000571cc
- (void)copyTo:(id)arg1;	// IMP=0x0010000000057105
- (Class)responseClass;	// IMP=0x00100000000570f4
- (unsigned int)requestTypeCode;	// IMP=0x00100000000570e9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000056fb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000056dec
- (id)dictionaryRepresentation;	// IMP=0x0010000000056bb9
- (id)description;	// IMP=0x0010000000056b0a
- (id)dashboardAppsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000056adc
- (unsigned long long)dashboardAppsCount;	// IMP=0x0010000000056abf
- (void)addDashboardApps:(id)arg1;	// IMP=0x0010000000056a55
- (void)clearDashboardApps;	// IMP=0x0010000000056a38

@end

