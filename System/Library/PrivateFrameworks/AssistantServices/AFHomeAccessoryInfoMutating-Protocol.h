//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol AFHomeAccessoryInfoMutating <NSObject>
- (void)setSchemaCategoryType:(long long)arg1;
- (void)setCategoryType:(NSString *)arg1;
- (void)setManufacturer:(NSString *)arg1;
- (void)setHasActiveThirdPartyMusicSubscription:(_Bool)arg1;
- (void)setIsSpeaker:(_Bool)arg1;
- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setRoomName:(NSString *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setLoggingUniqueIdentifier:(NSUUID *)arg1;
- (void)setUniqueIdentifier:(NSUUID *)arg1;
@end
