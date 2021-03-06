//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSSScreenshot;

@interface SSSPendingScreenshotRecord : NSObject
{
    SSSScreenshot *_screenshot;	// 8 = 0x8
    CDUnknownBlockType _deliveryCompletionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000058ad5
@property(copy, nonatomic) CDUnknownBlockType deliveryCompletionBlock; // @synthesize deliveryCompletionBlock=_deliveryCompletionBlock;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (id)initWithScreenshot:(id)arg1 deliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058a03

@end

