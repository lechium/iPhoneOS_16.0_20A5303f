//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/CSSuggestion.h>

@class NSData;

@interface CSSuggestion (MailUI)
+ (id)mui_mergeCurrentSuggestion:(id)arg1 suggestion:(id)arg2;	// IMP=0x0020000000002e81
+ (id)mui_spotlightSuggestionFromSerializedRepresentation:(id)arg1;	// IMP=0x0020000000002d36
+ (id)mui_spotlightSuggestionForEmailAddress:(id)arg1 scope:(long long)arg2 currentSuggestion:(id)arg3;	// IMP=0x0020000000002c4f
+ (id)mui_emptySuggestion;	// IMP=0x0020000000002bea
+ (id)mui_log;	// IMP=0x0020000000002b21
@property(readonly, nonatomic) NSData *mui_serializedSpotlightSuggestionRepresentation;
@end

