//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawableCategoryDefaults;

__attribute__((visibility("hidden")))
@interface OADDrawableDefaults : NSObject
{
    OADDrawableCategoryDefaults *mShapeDefaults;	// 8 = 0x8
    OADDrawableCategoryDefaults *mLineDefaults;	// 16 = 0x10
    OADDrawableCategoryDefaults *mTextDefaults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032eeb3
@property(retain, nonatomic) OADDrawableCategoryDefaults *textDefaults; // @synthesize textDefaults=mTextDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
- (id)description;	// IMP=0x000000000032ee24
- (id)addTextDefaults;	// IMP=0x000000000032ede9
- (id)addLineDefaults;	// IMP=0x000000000032edae
- (id)addShapeDefaults;	// IMP=0x000000000032ed73
- (void)addDefaults;	// IMP=0x000000000032ecca
- (_Bool)isEmpty;	// IMP=0x000000000032eca9

@end

