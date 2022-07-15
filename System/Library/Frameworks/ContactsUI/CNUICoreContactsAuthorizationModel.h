//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNUICoreContactsAuthorizationModel : NSObject
{
    NSArray *_items;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000267af
- (void).cxx_destruct;	// IMP=0x0000000000026605
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)modelByCopyingIconsOfRemoteItemsFromModel:(id)arg1;	// IMP=0x000000000002650c
- (id)modelByCopyingItemsWithBundleIdentifier:(id)arg1;	// IMP=0x000000000002640f
- (id)itemWithMatchingBundleIdentifier:(id)arg1;	// IMP=0x0000000000026342
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) NSArray *bundleIdentifiers;
@property(readonly, nonatomic) NSArray *remoteItems;
@property(readonly, nonatomic) NSArray *changedItems;
- (id)description;	// IMP=0x0000000000026150
- (unsigned long long)hash;	// IMP=0x00000000000260f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026048
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025fc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025fa1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025e90
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000025dcd
- (id)init;	// IMP=0x0000000000025d90

@end
