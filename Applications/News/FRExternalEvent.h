//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FRExternalEvent : NSObject
{
    NSDictionary *_queryParameters;	// 8 = 0x8
}

+ (id)streamViewEventWithEventType:(id)arg1 mediaType:(long long)arg2 userAction:(long long)arg3 hashedArticleID:(id)arg4 articleID:(id)arg5 publisherID:(id)arg6;	// IMP=0x004000000002fc77
+ (id)articleViewEventWithPublisherID:(id)arg1 hashedArticleID:(id)arg2 articleID:(id)arg3 referrerID:(id)arg4 articleType:(long long)arg5;	// IMP=0x001000000002fb09
+ (id)sectionViewEventWithPublisherID:(id)arg1;	// IMP=0x001000000002fa4f
+ (id)feedViewEventWithPublisherID:(id)arg1 referrerID:(id)arg2;	// IMP=0x001000000002f958
+ (id)appOpenViewEvent;	// IMP=0x001000000002f8df
- (void).cxx_destruct;	// IMP=0x002000000002fea5
@property(retain, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
- (id)initWithQueryParameters:(id)arg1;	// IMP=0x001000000002f86c

@end

