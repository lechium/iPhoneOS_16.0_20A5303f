//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TIEmojiCandidateGenerator;

@interface TIEmojiAlternativesServer : NSObject
{
    TIEmojiCandidateGenerator *_generator;	// 8 = 0x8
    NSArray *_localeIdentifiers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0020000000004720
- (void).cxx_destruct;	// IMP=0x0020000000004cdf
- (void)alternativesForText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000049d0
- (void)updateKeyboardType:(unsigned long long)arg1 appIdentifier:(id)arg2;	// IMP=0x00100000000049ba
- (void)updateForActiveLocaleIdentifiers:(id)arg1;	// IMP=0x0010000000004775

@end

