//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence19CRFileSyncPresenter : NSObject
{
    MISSING_TYPE *fileURL;	// 1701273965 = 0x6567616d
    MISSING_TYPE *queue;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *manager;	// 1414745679 = 0x54534e4f
}

- (void).cxx_destruct;	// IMP=0x00000000003a95a0
- (id)init;	// IMP=0x00000000003a9540
- (void)presentedItemDidGainVersion:(id)arg1;	// IMP=0x00000000003a94f0
- (void)presentedItemDidChange;	// IMP=0x00000000003a9250
@property(nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property(nonatomic, readonly) NSURL *presentedItemURL;

@end

