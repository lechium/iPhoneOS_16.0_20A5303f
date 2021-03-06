//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextInputSessionInsertionAction
{
    unsigned long long _textLength;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    unsigned long long _emojiCount;	// 48 = 0x30
    unsigned long long _punctuationCount;	// 56 = 0x38
    unsigned long long _withAlternativesCount;	// 64 = 0x40
}

@property(nonatomic) unsigned long long withAlternativesCount; // @synthesize withAlternativesCount=_withAlternativesCount;
@property(nonatomic) unsigned long long punctuationCount; // @synthesize punctuationCount=_punctuationCount;
@property(nonatomic) unsigned long long emojiCount; // @synthesize emojiCount=_emojiCount;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long textLength; // @synthesize textLength=_textLength;
- (id)description;	// IMP=0x0000000001142420
- (_Bool)changedContent;	// IMP=0x0000000001142418
- (long long)mergeActionIfPossible:(id)arg1;	// IMP=0x000000000114228a

@end

