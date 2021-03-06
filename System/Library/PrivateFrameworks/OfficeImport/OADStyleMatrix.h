//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject
{
    NSString *mName;	// 8 = 0x8
    NSMutableArray *mFills;	// 16 = 0x10
    NSMutableArray *mStrokes;	// 24 = 0x18
    NSMutableArray *mEffects;	// 32 = 0x20
    NSMutableArray *mBgFills;	// 40 = 0x28
}

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3;	// IMP=0x00600000001959ed
- (void).cxx_destruct;	// IMP=0x00000000003236e1
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (id)description;	// IMP=0x000000000032368a
- (_Bool)isEmpty;	// IMP=0x0000000000323627
- (void)validateStyleMatrix;	// IMP=0x0000000000323418
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;	// IMP=0x0000000000323311
- (id)bgFillAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c9ebe
- (unsigned long long)bgFillCount;	// IMP=0x00000000003232fb
- (void)addBgFill:(id)arg1;	// IMP=0x0000000000027da2
- (id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x0000000000323228
- (id)effectsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000196214
- (unsigned long long)effectsCount;	// IMP=0x0000000000323212
- (void)addEffects:(id)arg1;	// IMP=0x0000000000027d8b
- (id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x000000000032315a
- (id)strokeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019582f
- (unsigned long long)strokeCount;	// IMP=0x0000000000323144
- (void)addStroke:(id)arg1;	// IMP=0x00000000000277b5
- (id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x000000000032308c
- (id)fillAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000195dd8
- (unsigned long long)fillCount;	// IMP=0x0000000000323076
- (void)addFill:(id)arg1;	// IMP=0x00000000000262d2
- (id)init;	// IMP=0x000000000001e213

@end

