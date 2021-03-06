//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RecapPerformanceTesting/RCPButtonEventStreamComposer-Protocol.h>
#import <RecapPerformanceTesting/RCPFluidSwipeGesturesEventStreamComposer-Protocol.h>
#import <RecapPerformanceTesting/RCPGameControllerEventStreamComposer-Protocol.h>
#import <RecapPerformanceTesting/RCPPointerEventStreamComposer-Protocol.h>
#import <RecapPerformanceTesting/RCPTouchEventStreamComposer-Protocol.h>

@class RCPEventSenderProperties;

@protocol RCPEventStreamComposer <RCPTouchEventStreamComposer, RCPButtonEventStreamComposer, RCPPointerEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPGameControllerEventStreamComposer>
- (void)composeWithSender:(RCPEventSenderProperties *)arg1 actionBlock:(void (^)(id <RCPEventStreamComposer>))arg2;
@end

