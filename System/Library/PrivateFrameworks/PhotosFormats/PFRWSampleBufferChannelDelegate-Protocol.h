//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/NSObject-Protocol.h>

@class PFRWSampleBufferChannel;

@protocol PFRWSampleBufferChannelDelegate <NSObject>

@optional
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg3;
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@end
