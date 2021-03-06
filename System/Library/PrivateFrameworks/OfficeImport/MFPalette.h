//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFPalette : NSObject
{
    NSMutableArray *m_colours;	// 8 = 0x8
}

+ (id)paletteWithColours:(id)arg1;	// IMP=0x0010000000165c60
- (void).cxx_destruct;	// IMP=0x0000000000367a36
- (id)getColour:(int)arg1;	// IMP=0x00000000003679c5
- (_Bool)resize:(int)arg1;	// IMP=0x00000000003678bc
- (_Bool)setEntries:(int)arg1 in_colours:(id)arg2;	// IMP=0x000000000036782e
- (int)selectInto:(id)arg1;	// IMP=0x0000000000161fbc
- (id)initWithColours:(id)arg1;	// IMP=0x0000000000165cbd
- (id)init;	// IMP=0x00000000000f5b49

@end

