//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/VCIncomingSyncDataHandling-Protocol.h>
#import <VoiceShortcuts/VCOutgoingSyncDataHandling-Protocol.h>

@protocol VCShortcutSyncService;

@protocol VCSyncDataHandling <VCOutgoingSyncDataHandling, VCIncomingSyncDataHandling>
- (void)deregisterSyncService:(id <VCShortcutSyncService>)arg1;
- (void)registerSyncService:(id <VCShortcutSyncService>)arg1;
@end

