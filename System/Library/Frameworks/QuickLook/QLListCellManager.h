//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QLListCellManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_operations;	// 16 = 0x10
    NSOperationQueue *_generationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003e6be
@property(retain, nonatomic) NSOperationQueue *generationQueue; // @synthesize generationQueue=_generationQueue;
@property(retain, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
- (void)operation:(id)arg1 didDetermineFileSize:(id)arg2 fileTypeString:(id)arg3;	// IMP=0x000000000003e38e
- (void)operation:(id)arg1 didGenerateThumbnail:(id)arg2;	// IMP=0x000000000003e16e
- (void)_operationDidFinish:(id)arg1;	// IMP=0x000000000003e015
- (void)setupCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000003dcca
- (void)dealloc;	// IMP=0x000000000003dc88
- (id)init;	// IMP=0x000000000003dbd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
