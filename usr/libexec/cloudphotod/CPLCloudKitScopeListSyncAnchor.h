//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSData;

@interface CPLCloudKitScopeListSyncAnchor : NSObject
{
    CKServerChangeToken *_privateChangeToken;	// 8 = 0x8
    CKServerChangeToken *_sharedChangeToken;	// 16 = 0x10
}

+ (id)cloudKitScopeListSyncAnchorWithScopeListSyncAnchor:(id)arg1;	// IMP=0x002000000012f4fa
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012f4f2
- (void).cxx_destruct;	// IMP=0x002000000012f89a
@property(readonly, nonatomic) CKServerChangeToken *sharedChangeToken; // @synthesize sharedChangeToken=_sharedChangeToken;
@property(readonly, nonatomic) CKServerChangeToken *privateChangeToken; // @synthesize privateChangeToken=_privateChangeToken;
- (id)description;	// IMP=0x001000000012f784
@property(readonly, nonatomic) NSData *scopeListSyncAnchor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000012f6fa
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000012f620
- (id)initWithPrivateChangeToken:(id)arg1 sharedChangeToken:(id)arg2;	// IMP=0x001000000012f587

@end
