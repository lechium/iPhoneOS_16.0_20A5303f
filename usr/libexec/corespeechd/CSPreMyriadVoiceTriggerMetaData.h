//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSPreMyriadVoiceTriggerMetaData : NSObject
{
    _Bool _isSecondPassRunning;	// 8 = 0x8
    float _firstPassMyriadGoodnessScore;	// 12 = 0xc
    NSString *_deviceId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000013f30
@property(nonatomic) float firstPassMyriadGoodnessScore; // @synthesize firstPassMyriadGoodnessScore=_firstPassMyriadGoodnessScore;
@property(nonatomic) _Bool isSecondPassRunning; // @synthesize isSecondPassRunning=_isSecondPassRunning;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)init;	// IMP=0x0010000000013eb2

@end
