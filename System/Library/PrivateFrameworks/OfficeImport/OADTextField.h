//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField
{
    NSString *mText;	// 16 = 0x10
    OADParagraphProperties *mParagraphProperties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032e67b
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000003470b
- (void)setText:(id)arg1;	// IMP=0x000000000002e2c8
- (id)text;	// IMP=0x00000000000ac694
- (id)paragraphProperties;	// IMP=0x00000000001cc250
- (unsigned long long)characterCount;	// IMP=0x000000000032e65e
- (_Bool)isEmpty;	// IMP=0x000000000015381e
- (id)init;	// IMP=0x000000000002dfe3

@end

