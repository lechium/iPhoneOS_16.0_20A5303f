//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNSmartPropertyFetcher : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c0204
- (id)_cn_ignorableKeys;	// IMP=0x00000000000c028b
- (id)_cn_optionalKeys;	// IMP=0x00000000000c0272
- (id)_cn_requiredKeys;	// IMP=0x00000000000c0259
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0253
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0241
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c0212
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c020c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
