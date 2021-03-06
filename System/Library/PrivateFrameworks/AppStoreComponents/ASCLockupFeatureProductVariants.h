//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureProductVariants : NSObject
{
    NSString *_productVariantID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000020e3f
- (void).cxx_destruct;	// IMP=0x0000000000021186
@property(readonly, copy, nonatomic) NSString *productVariantID; // @synthesize productVariantID=_productVariantID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020fd3
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020f4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020ed4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020e47
- (id)initWithProductVariantID:(id)arg1;	// IMP=0x0000000000020dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

