//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBIntentMetadata, _INPBModifyNickname;

@protocol _INPBSetNicknameIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTargetNickname;
@property(retain, nonatomic) _INPBModifyNickname *targetNickname;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@end
