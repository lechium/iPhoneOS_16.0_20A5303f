//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SRRequestReading-Protocol.h"

@class NSDictionary, NSError;

@protocol SRRequestRecording <SRRequestReading>
@property(readonly, nonatomic) NSError *configurationDecodeError;
@property(retain, nonatomic) NSDictionary *sensorConfiguration;
@end

