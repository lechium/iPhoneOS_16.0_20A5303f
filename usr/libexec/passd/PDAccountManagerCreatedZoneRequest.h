//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerCreatedZoneRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    NSString *_zoneAccountIdentifier;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003fb09b
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy, nonatomic) NSString *zoneAccountIdentifier; // @synthesize zoneAccountIdentifier=_zoneAccountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000003fae0b
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003fadcb
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x00100000003faae9
- (id)requestIdentifier;	// IMP=0x00100000003faa8b
- (unsigned long long)requestType;	// IMP=0x00100000003faa80
- (id)initWithZoneAccountIdentifier:(id)arg1 containerName:(id)arg2 zoneName:(id)arg3;	// IMP=0x00100000003fa9ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

