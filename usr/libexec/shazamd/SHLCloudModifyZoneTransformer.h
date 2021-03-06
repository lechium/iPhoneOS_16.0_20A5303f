//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKModifyRecordZonesOperation, SHLSyncSessionConfiguration;

@interface SHLCloudModifyZoneTransformer : NSObject
{
    SHLSyncSessionConfiguration *_configuration;	// 8 = 0x8
    CKModifyRecordZonesOperation *_modifyRecordZonesOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003c375
@property(retain, nonatomic) CKModifyRecordZonesOperation *modifyRecordZonesOperation; // @synthesize modifyRecordZonesOperation=_modifyRecordZonesOperation;
@property(readonly, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)recordZonesFromCloudBackedZones:(id)arg1;	// IMP=0x001000000003c166
- (id)cloudBackedOperationForZonesToSave:(id)arg1 container:(id)arg2;	// IMP=0x001000000003bbaa
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000003bb25

@end

