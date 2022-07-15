//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolboxCore/_AURemoteParameterSynchronization-Protocol.h>

@class AVSpeechSynthesisProviderRequest, MIDICIProfile, NSArray;

@protocol AUAudioUnitHostProtocol <_AURemoteParameterSynchronization>
- (void)speechSynthesisMetadataAvailable:(NSArray *)arg1 speechRequest:(AVSpeechSynthesisProviderRequest *)arg2;
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(MIDICIProfile *)arg3 enabled:(_Bool)arg4;
- (void)propertiesChanged:(NSArray *)arg1;
@end
