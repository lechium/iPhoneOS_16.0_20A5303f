//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNPhoneNumber;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x0060000000167ba3
- (id)valueForDisplayString:(id)arg1;	// IMP=0x0000000000167b8a
- (id)displayStringForValue:(id)arg1;	// IMP=0x0000000000167b10
- (id)bestLabel:(id)arg1;	// IMP=0x0000000000167964
- (id)defaultActionURL;	// IMP=0x00000000001676dd
- (id)normalizedValue;	// IMP=0x000000000016768d
@property(readonly, nonatomic) CNPhoneNumber *phoneNumber;

@end
