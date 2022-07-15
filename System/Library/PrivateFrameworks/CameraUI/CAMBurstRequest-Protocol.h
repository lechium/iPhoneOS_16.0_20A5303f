//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureRequest, NSString;

@protocol CAMBurstRequest <NSObject>
- (CAMCaptureRequest *)captureRequest;
- (unsigned long long)maximumBurstLength;
- (NSString *)burstIdentifier;
@end
