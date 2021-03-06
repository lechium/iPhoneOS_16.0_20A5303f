//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTPronGuessResponse, FTStartPronGuessRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableApgPronGuessMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x0060000000093118
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x006000000009301a
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x0060000000092fe0
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property(copy, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property(copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(copy, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000928b6
- (id)init;	// IMP=0x0000000000092828

@end

