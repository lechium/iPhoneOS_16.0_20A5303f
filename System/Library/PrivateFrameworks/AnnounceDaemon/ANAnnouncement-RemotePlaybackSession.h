//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Announce/ANAnnouncement.h>

@class NSDictionary, NSURL;

@interface ANAnnouncement (RemotePlaybackSession)
+ (unsigned long long)defaultAudioEffects;	// IMP=0x002000000001f3df
+ (void)uniqueAnnouncersInAnnouncements:(id)arg1 inHome:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000057815
+ (id)contextsFrom:(id)arg1;	// IMP=0x0020000000059490
@property(readonly, nonatomic) NSURL *defaultActionURL;
@property(readonly, nonatomic) NSDictionary *sendFailureDictionary;
@property(readonly, nonatomic) NSDictionary *remoteSessionDictionary;
- (_Bool)processAudioWithEffects:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000001f155
- (id)announcerNameInHome:(id)arg1;	// IMP=0x001000000005777f
- (_Bool)isAnnouncerInSameRoomAsAccessory:(id)arg1;	// IMP=0x0010000000058798
@end

