//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject
{
    OADTextBodyProperties *mProperties;	// 8 = 0x8
    NSMutableArray *mParagraphs;	// 16 = 0x10
    OADTextListStyle *mTextListStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032c210
- (id)description;	// IMP=0x000000000032c1d2
- (id)plainText;	// IMP=0x000000000032c07c
- (_Bool)isSimilarToTextBody:(id)arg1;	// IMP=0x000000000032bf14
- (_Bool)propagateActualTextStyleToTextListStyle;	// IMP=0x000000000032bc42
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000002eee1
- (void)flattenProperties;	// IMP=0x000000000032bb47
- (_Bool)isEmpty;	// IMP=0x00000000001066a0
- (void)removeLastParagraphIfEmpty;	// IMP=0x000000000032bab0
- (void)removeLeadingNewlines;	// IMP=0x000000000032b9e2
- (void)removeTrailingNewlines;	// IMP=0x000000000032b913
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(_Bool)arg2;	// IMP=0x000000000032b6fa
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000002ebc1
- (void)applyTextListStyle:(id)arg1;	// IMP=0x000000000032b673
- (id)overrideTextListStyle;	// IMP=0x00000000000395ce
- (id)textListStyle;	// IMP=0x0000000000038f1b
- (id)firstParagraphEffects;	// IMP=0x000000000032b596
- (unsigned long long)newLineCount;	// IMP=0x000000000032b443
- (void)removeAllParagraphs;	// IMP=0x000000000032b42d
- (id)addParagraph;	// IMP=0x000000000002b5d8
- (id)paragraphAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a87db
- (unsigned long long)nonEmptyParagraphCount;	// IMP=0x000000000032b361
- (unsigned long long)paragraphCount;	// IMP=0x00000000000a87c5
- (void)setProperties:(id)arg1;	// IMP=0x0000000000240770
- (id)properties;	// IMP=0x000000000002de5a
- (id)init;	// IMP=0x0000000000028d8d
- (void)addParagraphsFromTextBody:(id)arg1;	// IMP=0x0000000000349565
- (id)findFirstTextRunOfClass:(Class)arg1;	// IMP=0x000000000002e8f5

@end
