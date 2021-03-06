//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUConversationActivityContext;

@interface CSDMessagingConversationActivityContext : PBCodable
{
    NSString *_actionDescription;	// 8 = 0x8
    NSString *_completedDescription;	// 16 = 0x10
    NSString *_contextIdentifier;	// 24 = 0x18
    NSString *_ongoingDescription;	// 32 = 0x20
}

+ (id)activityContextWithTUActivityContext:(id)arg1;	// IMP=0x001000000004f330
- (void).cxx_destruct;	// IMP=0x0010000000076878
@property(retain, nonatomic) NSString *completedDescription; // @synthesize completedDescription=_completedDescription;
@property(retain, nonatomic) NSString *ongoingDescription; // @synthesize ongoingDescription=_ongoingDescription;
@property(retain, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(retain, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000076741
- (unsigned long long)hash;	// IMP=0x00100000000766bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000076591
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000764a7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000076404
- (void)writeTo:(id)arg1;	// IMP=0x001000000007636d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000076360
- (id)dictionaryRepresentation;	// IMP=0x0010000000076108
- (id)description;	// IMP=0x0010000000076059
@property(readonly, nonatomic) _Bool hasCompletedDescription;
@property(readonly, nonatomic) _Bool hasOngoingDescription;
@property(readonly, nonatomic) _Bool hasActionDescription;
@property(readonly, nonatomic) _Bool hasContextIdentifier;
@property(readonly, nonatomic) TUConversationActivityContext *tuConversationActivityContext;

@end

