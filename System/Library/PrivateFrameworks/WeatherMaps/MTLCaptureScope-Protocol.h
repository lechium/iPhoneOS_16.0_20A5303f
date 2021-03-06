//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherMaps/NSObject-Protocol.h>

@class NSString;
@protocol MTLCommandQueue, MTLDevice;

@protocol MTLCaptureScope <NSObject>
@property(nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
- (void)endScope;
- (void)beginScope;
@end

