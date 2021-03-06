//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCache, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactHandleStringIndexer : NSObject
{
    CNCache *_indexImpl;	// 8 = 0x8
    NSArray *_targetHandleStrings;	// 16 = 0x10
}

+ (id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2;	// IMP=0x0060000000055754
- (void).cxx_destruct;	// IMP=0x0000000000055c4f
@property(readonly, nonatomic) NSArray *targetHandleStrings; // @synthesize targetHandleStrings=_targetHandleStrings;
@property(readonly, nonatomic) CNCache *indexImpl; // @synthesize indexImpl=_indexImpl;
- (void)indexPhoneNumbersOnContact:(id)arg1;	// IMP=0x0000000000055483
- (void)indexEmailAddressesOnContact:(id)arg1;	// IMP=0x00000000000551e3
- (void)indexContact:(id)arg1;	// IMP=0x000000000005518e
- (void)indexContacts:(id)arg1;	// IMP=0x0000000000055064
- (id)indexWithRawHandles;	// IMP=0x0000000000054cce
@property(readonly, nonatomic) NSDictionary *index;
- (id)description;	// IMP=0x0000000000054c14
- (id)initWithTargetHandleStrings:(id)arg1;	// IMP=0x0000000000054b5c
- (id)init;	// IMP=0x0000000000054b43

@end

