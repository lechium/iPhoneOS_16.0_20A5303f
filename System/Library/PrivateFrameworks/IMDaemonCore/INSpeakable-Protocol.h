//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INSpeakable <NSObject>
@property(readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) NSString *pronunciationHint;
@property(readonly, nonatomic) NSString *spokenPhrase;

@optional
@property(readonly, nonatomic) NSString *identifier;
@end

