//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureVisionDataOutput;

@protocol AVCaptureVisionDataOutputDelegate <NSObject>

@optional
- (void)visionDataOutput:(AVCaptureVisionDataOutput *)arg1 didDropVisionDataPixelBufferForTimestamp:(CDStruct_1b6d18a9)arg2 connection:(AVCaptureConnection *)arg3 reason:(long long)arg4;
- (void)visionDataOutput:(AVCaptureVisionDataOutput *)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(AVCaptureConnection *)arg4;
@end

