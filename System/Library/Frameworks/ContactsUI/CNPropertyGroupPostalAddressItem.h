//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000016f5cd
- (id)bestValue:(id)arg1;	// IMP=0x00000000001706a3
- (_Bool)_isMinimalAddress:(id)arg1;	// IMP=0x000000000017066d
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;	// IMP=0x000000000016fc67
- (id)defaultActionURL;	// IMP=0x000000000016fa99
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000016f6f2
- (id)normalizedValue;	// IMP=0x000000000016f636
@property(readonly, nonatomic) CNPostalAddress *address;

@end
