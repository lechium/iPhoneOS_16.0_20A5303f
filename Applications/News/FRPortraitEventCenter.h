//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, NSSet, NSString;

@interface FRPortraitEventCenter : NSObject
{
    FCCloudContext *_cloudContext;	// 8 = 0x8
    NSSet *_portraitAutofavoriteCandidates;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bca69
@property(readonly, nonatomic) NSSet *portraitAutofavoriteCandidates; // @synthesize portraitAutofavoriteCandidates=_portraitAutofavoriteCandidates;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void)fetchHeadlineForArticleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bc759
- (void)eventCenter:(id)arg1 eventDidFire:(id)arg2;	// IMP=0x00100000000bba70
- (id)initWithCloudContext:(id)arg1 portraitAutofavoriteCandidates:(id)arg2;	// IMP=0x00100000000bb938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
