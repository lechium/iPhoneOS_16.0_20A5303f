//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHTextInputScriptSpec : NSObject
{
}

+ (id)scriptHistogramForString:(id)arg1;	// IMP=0x0080000000068970
+ (_Bool)isCharacterEmoji:(id)arg1;	// IMP=0x00800000000686e0
+ (_Bool)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)arg1;	// IMP=0x00800000000686b0
+ (_Bool)isRightToLeftScriptForCharacter:(id)arg1;	// IMP=0x00800000000685d0
+ (_Bool)isCharacterFullWidth:(id)arg1;	// IMP=0x0080000000068530
+ (int)scriptCodeForCodepoint:(unsigned int)arg1;	// IMP=0x0080000000068500
+ (int)singleScriptCodeForString:(id)arg1;	// IMP=0x0080000000068310
+ (_Bool)isSkippableScriptCode:(int)arg1;	// IMP=0x0080000000068300
+ (_Bool)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)arg1;	// IMP=0x00800000000682c0

@end
