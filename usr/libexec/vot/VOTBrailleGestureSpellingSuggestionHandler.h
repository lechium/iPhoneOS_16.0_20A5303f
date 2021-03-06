//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UITextChecker;

@interface VOTBrailleGestureSpellingSuggestionHandler : NSObject
{
    UITextChecker *_textChecker;	// 8 = 0x8
    NSArray *_spellingSuggestions;	// 16 = 0x10
    struct _NSRange _rangeToReplace;	// 24 = 0x18
    long long _spellingSuggestionIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000048176
- (void)clearSpellingSuggestions;	// IMP=0x001000000004813b
- (id)applySpellingSuggestionForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x0010000000047f71
- (id)currentSpellingSuggestion;	// IMP=0x0010000000047f1b
- (void)selectNextSpellingSuggestionInDirection:(long long)arg1 responder:(id)arg2 languageCode:(id)arg3;	// IMP=0x0010000000047e2e
- (id)_generateSpellingSuggestionsForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x0010000000047c48
- (id)_spellingSuggestionsForWord:(id)arg1 languageCode:(id)arg2;	// IMP=0x0010000000047aed
- (id)_updateRangeToReplaceInContext:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x00100000000478df

@end

