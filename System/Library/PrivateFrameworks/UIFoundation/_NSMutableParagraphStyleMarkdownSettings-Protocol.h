//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSMutableCopying-Protocol.h>
#import <UIFoundation/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol _NSMutableParagraphStyleMarkdownSettings <NSObject, NSMutableCopying>

@optional
@property long long headerLevel;
@property(copy) NSString *codeBlockIntentLanguageHint;
@property long long listIntentOrdinal;
@property(setter=_setListIntentOrdinal:) long long _listIntentOrdinal;
@property(copy, nonatomic, setter=_setPresentationIntents:) NSArray *presentationIntents;
@property(copy, nonatomic, setter=_setPresentationIntents:) NSArray *_presentationIntents;
@end

