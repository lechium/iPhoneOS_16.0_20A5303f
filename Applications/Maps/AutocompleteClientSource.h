//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AutocompleteClientSource : NSObject
{
}

+ (id)autocompleteClientSourceAppIconWithType:(long long)arg1;	// IMP=0x004000000025cd64
+ (id)autocompleteClientSourceTitleWithType:(long long)arg1 contactName:(id)arg2;	// IMP=0x001000000025cae5
+ (id)autocompleteClientSourceTitleWithType:(long long)arg1;	// IMP=0x001000000025cad1
+ (_Bool)itemIsMarkedLocation:(id)arg1;	// IMP=0x001000000025ca67
+ (_Bool)itemIsFromMessages:(id)arg1;	// IMP=0x001000000025ca0d
+ (_Bool)itemIsFromMail:(id)arg1;	// IMP=0x001000000025c9b3
+ (_Bool)itemIsRecentPlace:(id)arg1;	// IMP=0x001000000025c91c
+ (_Bool)itemIsRecentSearch:(id)arg1;	// IMP=0x001000000025c8c2
+ (long long)autocompleteClientSourceTypeWithItem:(id)arg1;	// IMP=0x001000000025c808

@end

