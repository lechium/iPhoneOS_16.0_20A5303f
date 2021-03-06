//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface APIDAccount : NSObject
{
    _Bool _ageUnknown;	// 8 = 0x8
    _Bool _isAdolescent;	// 9 = 0x9
    _Bool _isAdult;	// 10 = 0xa
    _Bool _isChild;	// 11 = 0xb
    _Bool _isiCloudLoggedIn;	// 12 = 0xc
    _Bool _isiCloudSameAsiTunes;	// 13 = 0xd
    _Bool _isiTunesLoggedIn;	// 14 = 0xe
    _Bool _isManagedAccount;	// 15 = 0xf
    NSUUID *_anonymousDemandID;	// 16 = 0x10
    NSUUID *_contentID;	// 24 = 0x18
    NSString *_DPID;	// 32 = 0x20
    NSUUID *_iAdID;	// 40 = 0x28
    NSNumber *_iTunesDSID;	// 48 = 0x30
    NSNumber *_monthlyIDResetCount;	// 56 = 0x38
    NSString *_storefront;	// 64 = 0x40
    NSUUID *_toroID;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002b3c3
- (void).cxx_destruct;	// IMP=0x002000000002c1d3
@property(readonly) NSUUID *toroID; // @synthesize toroID=_toroID;
@property(readonly) NSString *storefront; // @synthesize storefront=_storefront;
@property(readonly) NSNumber *monthlyIDResetCount; // @synthesize monthlyIDResetCount=_monthlyIDResetCount;
@property(readonly) NSNumber *iTunesDSID; // @synthesize iTunesDSID=_iTunesDSID;
@property(readonly) _Bool isManagedAccount; // @synthesize isManagedAccount=_isManagedAccount;
@property(readonly) _Bool isiTunesLoggedIn; // @synthesize isiTunesLoggedIn=_isiTunesLoggedIn;
@property(readonly) _Bool isiCloudSameAsiTunes; // @synthesize isiCloudSameAsiTunes=_isiCloudSameAsiTunes;
@property(readonly) _Bool isiCloudLoggedIn; // @synthesize isiCloudLoggedIn=_isiCloudLoggedIn;
@property(readonly) _Bool isChild; // @synthesize isChild=_isChild;
@property(readonly) _Bool isAdult; // @synthesize isAdult=_isAdult;
@property(readonly) _Bool isAdolescent; // @synthesize isAdolescent=_isAdolescent;
@property(readonly) NSUUID *iAdID; // @synthesize iAdID=_iAdID;
@property(readonly) NSString *DPID; // @synthesize DPID=_DPID;
@property(readonly) NSUUID *contentID; // @synthesize contentID=_contentID;
@property(readonly) NSUUID *anonymousDemandID; // @synthesize anonymousDemandID=_anonymousDemandID;
@property(readonly) _Bool ageUnknown; // @synthesize ageUnknown=_ageUnknown;
- (void)_performForceReconcile;	// IMP=0x001000000002c00b
- (id)_fakeID;	// IMP=0x001000000002bf62
- (id)initWithIDAccountsRecord:(id)arg1 storefront:(id)arg2 monthlyIDResetCount:(id)arg3;	// IMP=0x001000000002b961
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002b6be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002b3cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

