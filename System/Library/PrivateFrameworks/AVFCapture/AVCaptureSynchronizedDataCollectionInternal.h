//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureSynchronizedDataCollectionInternal : NSObject
{
    AVCaptureOutput *dataOutputs[4];	// 8 = 0x8
    AVCaptureSynchronizedData *synchronizedData[4];	// 40 = 0x28
    BOOL count;	// 72 = 0x48
    unsigned long long changeSeed;	// 80 = 0x50
    CDStruct_1b6d18a9 creationTime;	// 88 = 0x58
    NSArray *possibleDataOutputs;	// 112 = 0x70
}

@end
