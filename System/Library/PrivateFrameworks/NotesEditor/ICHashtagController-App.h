//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICHashtagController.h>

@interface ICHashtagController (App)
+ (void)addUnconfirmedAttributeToTextStorage:(id)arg1 atRange:(struct _NSRange)arg2;	// IMP=0x006000000000d67c
+ (struct _NSRange)rangeOfUnconfirmedHashtagInTextStorage:(id)arg1;	// IMP=0x006000000000d557
- (void)insertHashtagAttachment:(id)arg1 toTextView:(id)arg2 range:(struct _NSRange)arg3 viaAutoComplete:(_Bool)arg4 delimiter:(id)arg5;	// IMP=0x001000000000cf1f
- (void)insertHashtagWithText:(id)arg1 viaAutoComplete:(_Bool)arg2 delimiter:(id)arg3 parentAttachment:(id)arg4;	// IMP=0x001000000000ccdd
- (void)insertHashtagWithText:(id)arg1 viaAutoComplete:(_Bool)arg2 parentAttachment:(id)arg3;	// IMP=0x001000000000ccc5
- (_Bool)isValidElement:(unsigned short)arg1;	// IMP=0x001000000000cc6b
- (_Bool)isEmoji:(id)arg1;	// IMP=0x001000000000cb55
- (_Bool)isValidPostfixString:(id)arg1;	// IMP=0x001000000000caa9
- (_Bool)isValidPostfixCharacter:(unsigned short)arg1;	// IMP=0x001000000000ca50
- (_Bool)range:(struct _NSRange)arg1 hasValidPostfixCharacterForString:(id)arg2;	// IMP=0x001000000000c9d5
- (void)updateAutoCompletionView:(id)arg1 range:(struct _NSRange)arg2 textView:(id)arg3 ofTextStorage:(id)arg4;	// IMP=0x001000000000c7a1
- (void)dismissAutoCompletionView;	// IMP=0x001000000000c66c
- (_Bool)isExistingHashtag:(id)arg1 hashtagSuggestionsArray:(id)arg2;	// IMP=0x001000000000c46f
- (struct _NSRange)rangeToCheckForHashtagCreation:(struct _NSRange)arg1;	// IMP=0x001000000000c453
- (void)createNewHashtagIfNecessary:(struct _NSRange)arg1 textStorage:(id)arg2 ignoreDelimiter:(_Bool)arg3 parentAttachment:(id)arg4;	// IMP=0x001000000000baea
- (void)updatePredictiveBar:(id)arg1;	// IMP=0x001000000000b9f0
- (id)currentUnconfirmedHashtagString:(id)arg1 textStorage:(id)arg2;	// IMP=0x001000000000b880
- (void)updateUIWhenAutoConversionOff:(id)arg1 textStorage:(id)arg2;	// IMP=0x001000000000b650
- (void)clearUnconfirmedHashtagInTextStorage:(id)arg1;	// IMP=0x001000000000b5aa
- (void)_checkForHashtagInEditedRange:(struct _NSRange)arg1 ofTextStorage:(id)arg2 note:(id)arg3 textView:(id)arg4 allowAutoExplicitHashtag:(_Bool)arg5 isEndingEditing:(_Bool)arg6 languageHasSpaces:(_Bool)arg7 parentAttachment:(id)arg8;	// IMP=0x001000000000aeaa
@end
